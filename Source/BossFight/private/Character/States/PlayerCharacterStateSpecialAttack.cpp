// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateSpecialAttack.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

void UPlayerCharacterStateSpecialAttack::StateInit(UPlayerStateMachine* InStateMachine)
{
	Super::StateInit(InStateMachine);
	PlayerMovementParameters = Character->PlayerMovementParameters;

	TArray<UActorComponent*> ChildComponents;
	Character->GetComponents(ChildComponents);

	for (UActorComponent* Component : ChildComponents)
	{
		if (Component && Component->GetName() == "SpecialAttackSpawn")
		{
			AttackOrigin = Component;
			break;
		}
	}
}

PlayerCharacterStateID UPlayerCharacterStateSpecialAttack::GetStateID()
{
	return PlayerCharacterStateID::SpecialAttack;
}


void UPlayerCharacterStateSpecialAttack::StateEnter(PlayerCharacterStateID PlayerStateID)
{
	Super::StateEnter(PlayerStateID);	

	Character->SpecialAttacking = true;
	Character->OnCameraTransition(2);
	
	UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
	if (!Movement) return;

	TimeToSlowDown = PlayerMovementParameters->TimeToSlowDown;
	TimeToChargeSpecialAttack = PlayerMovementParameters->TimeToChargeSpecialAttack;
	if (Character->CanInstantspecialAttack)
	{
		Character->SpecialAttackTimer = 0.f;
		TimeToChargeSpecialAttack = PlayerMovementParameters->PerfectDodgeTimeToCharge;
	}
	MaxTimeToHoldAttack = PlayerMovementParameters->MaxTimeToHoldAttack;
	StunAfterAttack = PlayerMovementParameters->StunAfterAttack;
	CancelWindow = PlayerMovementParameters->CancelWindow;
	MouseSensitivityCurve = PlayerMovementParameters->MouseSensitivityCurve;
	
	// Sauvegarde la sensibilité initiale
	InitialMouseSensitivity = Character->MouseSensitivity;
	
	// Récupère la vitesse actuelle du personnage
	InitialSpeed = Movement->Velocity.Size();
	CurrentSlowDownTime = 0.f;
	
	// Réinitialise les timers et états
	CurrentChargeTime = 0.f;
	CurrentHoldTime = 0.f;
	CurrentStunTime = 0.f;
	bIsCharging = true;
	bIsHolding = false;
	bHasShot = false;
	
	// Récupère la direction du mouvement actuel
	if (!Movement->Velocity.IsNearlyZero())
	{
		SlowDownDirection = Movement->Velocity.GetSafeNormal();
	}

	// Spawn le VFX de charge à la position de AttackOrigin
	if (Character->SpecialAttackVFX && AttackOrigin)
	{
		USceneComponent* SceneComponent = Cast<USceneComponent>(AttackOrigin);
		if (SceneComponent)
		{
			FVector SpawnLocation = SceneComponent->GetComponentLocation();
			FRotator SpawnRotation = SceneComponent->GetComponentRotation();
			
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = Character;
			SpawnParams.Instigator = Character;

			APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (!PC) return;

			FRotator ViewRot;
			FVector Origin;

			PC->GetPlayerViewPoint(Origin, ViewRot);
			
			FHitResult Hit;
			FCollisionQueryParams Params;
			Params.AddIgnoredComponent(Cast<const UPrimitiveComponent>(SceneComponent));
			Params.AddIgnoredActor(Character);
			
			FVector StartTrace = Origin;
			FVector EndTrace = Origin + ViewRot.Vector() * 10000;

			FVector EndPos;

			if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, Params))
			{
				EndPos = Hit.ImpactPoint + ViewRot.Vector();
			}
			else
			{
				EndPos = EndTrace;
			}

			// look at
			FRotator LookAtRotation = (EndPos - SpawnLocation).Rotation();
			SceneComponent->SetWorldRotation(LookAtRotation);

			if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, Params))
			{
				EndPos = Hit.ImpactPoint + ViewRot.Vector();
			}
			else
			{
				EndPos = EndTrace;
			}
			
			UWorld* World = Character->GetWorld();
			if (World)
			{
			    SpawnedVFX = World->SpawnActor<AActor>(
			        Character->SpecialAttackVFX,
			        SpawnLocation,
			        LookAtRotation,  // Utilise LookAtRotation au lieu de SpawnRotation
			        SpawnParams
			    );
			    
			    if (SpawnedVFX)
			    {
			        // Attache le VFX à l'AttackOrigin pour qu'il suive le joueur
			        SpawnedVFX->AttachToComponent(
			            SceneComponent,
			            FAttachmentTransformRules::SnapToTargetNotIncludingScale
			        );
					
					// Calcule la TimeDilation nécessaire
					// Le VFX dure 2 secondes de base, on veut qu'il dure TimeToChargeSpecialAttack
					// TimeDilation = DuréeDeBase / DuréeVoulue = 2.0 / TimeToChargeSpecialAttack
					float CalculatedTimeDilation = 2.0f / TimeToChargeSpecialAttack;
					
					FProperty* TimeDilationProp = SpawnedVFX->GetClass()->FindPropertyByName(TEXT("TimeDilation"));
					if (TimeDilationProp)
					{
						if (FFloatProperty* FloatProp = CastField<FFloatProperty>(TimeDilationProp))
						{
							FloatProp->SetPropertyValue_InContainer(SpawnedVFX, CalculatedTimeDilation);
						}
					}
			    	
				}
			}
		}
	}
}

void UPlayerCharacterStateSpecialAttack::StateExit(PlayerCharacterStateID PlayerStateID)
{
	Super::StateExit(PlayerStateID);

	Character->OnCameraTransition(0);

	Character->SpecialAttacking = false;
	
	// Restaure la sensibilité de la souris
	Character->MouseSensitivity = InitialMouseSensitivity;

	// Détruit tous les VFX quand on quitte l'état
	if (SpawnedVFX && SpawnedVFX->IsValidLowLevel())
	{
		SpawnedVFX->Destroy();
		SpawnedVFX = nullptr;
	}
	
	if (HoldVFX && HoldVFX->IsValidLowLevel())
	{
		HoldVFX->Destroy();
		HoldVFX = nullptr;
	}
	
	if (ShootVFX && ShootVFX->IsValidLowLevel())
	{
		ShootVFX = nullptr;
	}
}

void UPlayerCharacterStateSpecialAttack::StateTick(float DeltaTime)
{
	Super::StateTick(DeltaTime);
	
	UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
	if (!Movement) return;

	// === PHASE DE STUN APRÈS L'ATTAQUE ===
	if (bHasShot)
	{
		CurrentStunTime += DeltaTime;
		
		// Maintient le joueur immobile pendant le stun
		Movement->MaxWalkSpeed = 0.f;
		
		// Une fois le stun terminé, retourne à Idle
		if (CurrentStunTime >= StunAfterAttack)
		{
			StateMachine->ChangeState(PlayerCharacterStateID::Idle);
			return;
		}
		
		// Ne continue pas le reste du tick pendant le stun
		return;
	}

	// === MISE À JOUR DE LA ROTATION DU SPAWN POINT ===
	// Continue de mettre à jour la rotation pendant la charge et le hold
	if ((bIsCharging || bIsHolding) && AttackOrigin)
	{
		UpdateAttackOriginRotation();
	}

	// Phase de charge : utilise la courbe pour la sensibilité
	if (bIsCharging)
	{
		float ChargeProgress = FMath::Clamp(CurrentChargeTime / TimeToChargeSpecialAttack, 0.f, 1.f);
    
		if (MouseSensitivityCurve)
		{
			// Évalue la courbe (attendu : valeur entre 0 et 1)
			float CurveValue = MouseSensitivityCurve->GetFloatValue(ChargeProgress);
			Character->MouseSensitivity = InitialMouseSensitivity * CurveValue;
		}
		else
		{
			// Fallback sur le lerp linéaire si pas de courbe
			Character->MouseSensitivity = FMath::Lerp(InitialMouseSensitivity, 0.f, ChargeProgress);
		}
	}

	// Continue le ralentissement tant qu'on n'a pas atteint TimeToSlowDown
	if (CurrentSlowDownTime < TimeToSlowDown)
	{
		CurrentSlowDownTime += DeltaTime;
		
		// Interpolation de la vitesse de InitialSpeed vers 0
		float SlowDownProgress = FMath::Clamp(CurrentSlowDownTime / TimeToSlowDown, 0.f, 1.f);
		float CurrentSpeed = FMath::Lerp(InitialSpeed, 0.f, SlowDownProgress);
		
		Movement->MaxWalkSpeed = CurrentSpeed;
		
		// Récupère l'input actuel du joueur
		float InputX = Character->GetInputMoveX();
		float InputY = Character->GetInputMoveY();
		float InputMagnitude = FMath::Sqrt(InputX * InputX + InputY * InputY);
		
		FVector InputDirection = FVector(InputX, InputY, 0.f).GetSafeNormal();
		FRotator ControlRot = Character->GetControlRotation();
		FRotator YawRotation(0.f, ControlRot.Yaw, 0.f);
		InputDirection = YawRotation.RotateVector(InputDirection);
		
		// Applique le mouvement selon l'input du joueur
		if (InputMagnitude > 0.1f)
		{
			float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
			Character->AddMovementInput(InputDirection, ClampedMagnitude);
		}
	}
	else
	{
		// Arrêt complet
		Movement->MaxWalkSpeed = 0.f;
	}
	
	// === GESTION DES PHASES DE VFX ===
	
	// Phase 1: Charge
	if (bIsCharging)
	{
		// Vérifie si le bouton est toujours maintenu
		if (!Character->GetInputSpecialAttack() && CurrentChargeTime < CancelWindow) 
		{
			// Bouton relâché pendant la charge - annule l'attaque
			
			// Double la TimeDilation du VFX pour qu'il disparaisse rapidement
			if (SpawnedVFX && SpawnedVFX->IsValidLowLevel())
			{
				FProperty* TimeDilationProp = SpawnedVFX->GetClass()->FindPropertyByName(TEXT("TimeDilation"));
				if (TimeDilationProp)
				{
					if (FFloatProperty* FloatProp = CastField<FFloatProperty>(TimeDilationProp))
					{
						float CurrentDilation = FloatProp->GetPropertyValue_InContainer(SpawnedVFX);
						FloatProp->SetPropertyValue_InContainer(SpawnedVFX, CurrentDilation * 2.0f);
					}
				}
			}
			
			// Retourne à l'état Idle
			StateMachine->ChangeState(PlayerCharacterStateID::Idle);
			return;
		}
		
		CurrentChargeTime += DeltaTime;
		
		if (CurrentChargeTime >= TimeToChargeSpecialAttack)
		{
			// Fin de la charge, passage au Hold
			bIsCharging = false;
			bIsHolding = true;
			
			// Détruit le VFX de charge
			if (SpawnedVFX && SpawnedVFX->IsValidLowLevel())
			{
				SpawnedVFX->Destroy();
				SpawnedVFX = nullptr;
			}
			
			// Spawn le HoldVFX
			if (Character->HoldVFX && AttackOrigin)
			{
				USceneComponent* SceneComponent = Cast<USceneComponent>(AttackOrigin);
				if (SceneComponent)
				{
					FVector SpawnLocation = SceneComponent->GetComponentLocation();
					FRotator SpawnRotation = SceneComponent->GetComponentRotation();
					
					FActorSpawnParameters SpawnParams;
					SpawnParams.Owner = Character;
					SpawnParams.Instigator = Character;
					
					UWorld* World = Character->GetWorld();
					if (World)
					{
						HoldVFX = World->SpawnActor<AActor>(
							Character->HoldVFX,
							SpawnLocation,
							SpawnRotation,
							SpawnParams
						);
						
						if (HoldVFX)
						{
							HoldVFX->AttachToComponent(
								SceneComponent,
								FAttachmentTransformRules::SnapToTargetNotIncludingScale
							);
						}
					}
				}
			}
		}
	}
	// Phase 2: Hold
	else if (bIsHolding)
	{
		// Vérifie si le bouton est relâché pendant le hold
		if (!Character->GetInputSpecialAttack())
		{
			// Bouton relâché pendant le hold - lance l'attaque immédiatement
			SpawnShootVFX();
			return;
		}
		
		CurrentHoldTime += DeltaTime;
		
		if (CurrentHoldTime >= MaxTimeToHoldAttack)
		{
			// Fin du hold, passage au Shoot (temps maximum atteint)
			SpawnShootVFX();
		}
	}
}
void UPlayerCharacterStateSpecialAttack::SpawnShootVFX()
{
	bIsHolding = false;
	bHasShot = true;
	
	// Détruit le HoldVFX
	if (HoldVFX && HoldVFX->IsValidLowLevel())
	{
		HoldVFX->Destroy();
		HoldVFX = nullptr;
	}
	
	// Spawn le ShootVFX
	if (Character->ShootVFX && AttackOrigin)
	{
		USceneComponent* SceneComponent = Cast<USceneComponent>(AttackOrigin);
		if (SceneComponent)
		{
			FVector SpawnLocation = SceneComponent->GetComponentLocation();
			FRotator SpawnRotation = SceneComponent->GetComponentRotation();
			
			// === CALCUL DE LA DISTANCE ET DÉTECTION DE L'ACTEUR HITTÉ ===
			float Distance = 1500.0f;
			float Multiplier = 1.0f;
			AActor* HitActor = nullptr; // L'acteur touché par le laser
			
			APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (PC)
			{
				FRotator ViewRot;
				FVector Origin;
				PC->GetPlayerViewPoint(Origin, ViewRot);
				
				FHitResult Hit;
				FCollisionQueryParams Params;
				Params.AddIgnoredComponent(Cast<const UPrimitiveComponent>(SceneComponent));
				Params.AddIgnoredActor(Character);
				
				FVector StartTrace = Origin;
				FVector EndTrace = Origin + ViewRot.Vector() * 100000;
				
				FVector TargetPos;
				if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, Params))
				{
					TargetPos = Hit.ImpactPoint;
					HitActor = Hit.GetActor(); // Récupère l'acteur touché
				}
				else
				{
					TargetPos = EndTrace;
				}
				
				// Calcule la distance
				Distance = FVector::Dist(SpawnLocation, TargetPos);
				
				// Le laser de base fait 1500 unités, calcule le multiplicateur
				float BaseDistance = 1500.0f;
				Multiplier = Distance / BaseDistance;
			}
			
			// === SPAWN DE L'ACTOR ===
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = Character;
			SpawnParams.Instigator = Character;
			
			UWorld* World = Character->GetWorld();
			if (World)
			{
				ShootVFX = World->SpawnActor<AActor>(
					Character->ShootVFX,
					SpawnLocation,
					SpawnRotation,
					SpawnParams
				);
				
				if (ShootVFX)
				{
					ShootVFX->AttachToComponent(
						SceneComponent,
						FAttachmentTransformRules::SnapToTargetNotIncludingScale
					);
					
					// === MODIFICATION DES PARAMÈTRES NIAGARA ===
					TArray<UActorComponent*> Components;
					ShootVFX->GetComponents(Components);
					
					UNiagaraComponent* NiagaraComp = nullptr;
					for (UActorComponent* Comp : Components)
					{
						if (UNiagaraComponent* NiagaraCandidate = Cast<UNiagaraComponent>(Comp))
						{
							if (NiagaraCandidate->GetName().Contains(TEXT("NS_Burst_Dark")))
							{
								NiagaraComp = NiagaraCandidate;
								break;
							}
						}
					}
					
					if (NiagaraComp)
					{
						NiagaraComp->Deactivate();
						
						FVector PositionMaxX = FVector(1.0f, 1.0f, 1.0f) * Multiplier;
						NiagaraComp->SetVariableVec3(FName("Position Max X"), PositionMaxX);
						
						FVector PositionMaxY = FVector(1.0f, Multiplier, 1.0f);
						NiagaraComp->SetVariableVec3(FName("Position Max Y"), PositionMaxY);
						
						NiagaraComp->Activate(true);
					}

					// === APPEL DE OnLaserLaunched AVEC L'ACTEUR HITTÉ ===
					Character->OnLaserLaunched(HitActor);
				}
			}
		}
	}
}
void UPlayerCharacterStateSpecialAttack::UpdateAttackOriginRotation()
{
	USceneComponent* SceneComponent = Cast<USceneComponent>(AttackOrigin);
	if (!SceneComponent) return;

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PC) return;

	FRotator ViewRot;
	FVector Origin;
	PC->GetPlayerViewPoint(Origin, ViewRot);
	
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredComponent(Cast<const UPrimitiveComponent>(SceneComponent));
	Params.AddIgnoredActor(Character);
	
	FVector StartTrace = Origin;
	FVector EndTrace = Origin + ViewRot.Vector() * 10000;

	FVector EndPos;
	if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, Params))
	{
		EndPos = Hit.ImpactPoint;
	}
	else
	{
		EndPos = EndTrace;
	}

	// Met à jour la rotation pour pointer vers la cible
	FVector SpawnLocation = SceneComponent->GetComponentLocation();
	FRotator LookAtRotation = (EndPos - SpawnLocation).Rotation();
	SceneComponent->SetWorldRotation(LookAtRotation);
}
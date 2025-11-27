// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateSpecialAttack.h"

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

	GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Cyan,
		FString::Printf(TEXT("Enter SpecialAttack"))
	);
	
	UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
	if (!Movement) return;

	TimeToSlowDown = PlayerMovementParameters->TimeToSlowDown;
	TimeToChargeSpecialAttack = PlayerMovementParameters->TimeToChargeSpecialAttack;
	MaxTimeToHoldAttack = PlayerMovementParameters->MaxTimeToHoldAttack;
	StunAfterAttack = PlayerMovementParameters->StunAfterAttack;
	CancelWindow = PlayerMovementParameters->CancelWindow;
	
	// Sauvegarde la sensibilité initiale
	InitialMouseSensitivity = Character->MouseSensitivity;
	
	// Récupère la vitesse actuelle du personnage
	InitialSpeed = Movement->Velocity.Size();
	CurrentSlowDownTime = 0.f;
	
	// Réinitialise les timers et états
	CurrentChargeTime = 0.f;
	CurrentHoldTime = 0.f;
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
    
				// Debug: Ligne verte jusqu'au point d'impact
				DrawDebugLine(
					GetWorld(),
					StartTrace,
					Hit.ImpactPoint,
					FColor::Green,
					false,
					1.0f,  // Durée en secondes
					0,
					2.0f   // Épaisseur
				);
    
				// Debug: Sphère rouge au point d'impact
				DrawDebugSphere(
					GetWorld(),
					Hit.ImpactPoint,
					10.0f,  // Rayon
					12,     // Segments
					FColor::Red,
					false,
					1.0f
				);
			}
			else
			{
				EndPos = EndTrace;
    
				// Debug: Ligne jaune si pas de hit
				DrawDebugLine(
					GetWorld(),
					StartTrace,
					EndTrace,
					FColor::Yellow,
					false,
					1.0f,
					0,
					2.0f
				);
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
					
					GEngine->AddOnScreenDebugMessage(
						-1,
						3.f,
						FColor::Green,
						FString::Printf(TEXT("Charge VFX spawned with TimeDilation: %.2f"), CalculatedTimeDilation)
					);
				}
			}
		}
	}
}

void UPlayerCharacterStateSpecialAttack::StateExit(PlayerCharacterStateID PlayerStateID)
{
	Super::StateExit(PlayerStateID);
	
	GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Red,
		FString::Printf(TEXT("Exit Special Attack"))
	);

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
		ShootVFX->Destroy();
		ShootVFX = nullptr;
	}
}

void UPlayerCharacterStateSpecialAttack::StateTick(float DeltaTime)
{
	Super::StateTick(DeltaTime);
	
	UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
	if (!Movement) return;

	// Phase de charge : lerp de la sensibilité vers 0
	if (bIsCharging)
	{
		float ChargeProgress = FMath::Clamp(CurrentChargeTime / TimeToChargeSpecialAttack, 0.f, 1.f);
		Character->MouseSensitivity = FMath::Lerp(InitialMouseSensitivity, 0.f, ChargeProgress);
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
		if (!Character->GetInputSpecialAttack() && CurrentChargeTime<CancelWindow) 
		{
			// Bouton relâché pendant la charge - annule l'attaque
			GEngine->AddOnScreenDebugMessage(
				-1,
				3.f,
				FColor::Orange,
				FString::Printf(TEXT("Special Attack cancelled - button released during charge"))
			);
			
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
						
						GEngine->AddOnScreenDebugMessage(
							-1,
							3.f,
							FColor::Orange,
							FString::Printf(TEXT("VFX TimeDilation doubled to: %.2f"), CurrentDilation * 2.0f)
						);
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
							
							GEngine->AddOnScreenDebugMessage(
								-1,
								3.f,
								FColor::Yellow,
								FString::Printf(TEXT("Hold VFX spawned"))
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
			GEngine->AddOnScreenDebugMessage(
				-1,
				3.f,
				FColor::Green,
				FString::Printf(TEXT("Special Attack released - firing!"))
			);
			
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
							
							GEngine->AddOnScreenDebugMessage(
								-1,
								3.f,
								FColor::Magenta,
								FString::Printf(TEXT("Shoot VFX spawned (released early)"))
							);
						}
					}
				}
			}
			return;
		}
		
		CurrentHoldTime += DeltaTime;
		
		if (CurrentHoldTime >= MaxTimeToHoldAttack)
		{
			// Fin du hold, passage au Shoot (temps maximum atteint)
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
							
							GEngine->AddOnScreenDebugMessage(
								-1,
								3.f,
								FColor::Magenta,
								FString::Printf(TEXT("Shoot VFX spawned (max hold time reached)"))
							);
						}
					}
				}
			}
		}
	}
}
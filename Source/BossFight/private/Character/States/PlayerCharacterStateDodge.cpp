// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateDodge.h"


#include "Character/PlayerCharacter.h"


PlayerCharacterStateID UPlayerCharacterStateDodge::GetStateID()
{
	return PlayerCharacterStateID::Dodge;
}

void UPlayerCharacterStateDodge::StateInit(UPlayerStateMachine* InStateMachine)
{
	Super::StateInit(InStateMachine);
	PlayerMovementParameters = Character->PlayerMovementParameters;
}

void UPlayerCharacterStateDodge::StateEnter(PlayerCharacterStateID PlayerStateID)
{
	Super::StateEnter(PlayerStateID);

	Character->OnCameraTransition(1);
	
	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Cyan,
	FString::Printf(TEXT("Enter StateDodge"))
	);
	DashTime = 0.0f;
	DashStartLocation = Character->GetActorLocation();
	
	float InputX = Character->GetInputMoveX();
	float InputY = Character->GetInputMoveY();
	FVector RawInputDirection = FVector(InputX, InputY, 0.f);
	FRotator ControlRot = Character->GetControlRotation();
	FRotator YawRotation(0.f, ControlRot.Yaw, 0.f);
	DashDirection = YawRotation.RotateVector(RawInputDirection.GetSafeNormal());

	if (DashDirection == FVector(0.f, 0.f, 0.f))
	{
		DashDirection = Character->GetActorForwardVector();
	}
	
	DashDuration = PlayerMovementParameters->DashDuration;
	DashDistance = PlayerMovementParameters->DashDistance;
	DashEasing = PlayerMovementParameters->DashEasing;
	DodgeDelay = PlayerMovementParameters->DodgeDelay;
	PerfectDodgeWindow = PlayerMovementParameters->PerfectDodgeWindow;

	StateMachine->DodgeCooldown = PlayerMovementParameters->DodgeCooldown;
	
	IsPerfectDodgeHitboxSpawned = false;

	StateMachine->StartingDodgeCharges--;
	StateMachine->DodgeCooldownTimer = StateMachine->DodgeCooldown;
	if (StateMachine->StartingDodgeCharges < StateMachine->MaxDodgeCharges && StateMachine->DodgeChargeRechargeTimer <= 0.0f)
	{
		StateMachine->DodgeChargeRechargeTimer = 0.0f;
	}
}

void UPlayerCharacterStateDodge::StateExit(PlayerCharacterStateID PlayerStateID)
{
	Super::StateExit(PlayerStateID);
	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Red,
	FString::Printf(TEXT("Exit StateDodge"))
	);
}

void UPlayerCharacterStateDodge::StateTick(float DeltaTime)
{
	Super::StateTick(DeltaTime);

	DashTime += DeltaTime;
	float MinTime, MaxTime;
	if (DashEasing != nullptr)
	{
		DashEasing->GetTimeRange(MinTime, MaxTime);
		float NormalizedTime = FMath::Lerp(MinTime, MaxTime, DashTime / DashDuration);
		float Alpha = FMath::Clamp(DashEasing->GetFloatValue(NormalizedTime), 0.f, 1.f);
		FVector NewLocation = DashStartLocation + DashDirection * DashDistance * Alpha;
		Character->SetActorLocation(NewLocation, true);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Red,
		FString::Printf(TEXT("TU AS OUBLIE D'AJOUTER UNE COURBE D'EASING DANS LES PARAMETRES DE MOUVEMENT"))
		);
	}
	if (Character->DodgeShadow && Character->isPerfectDodging)
	{
            
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			USkeletalMeshComponent* Mesh = Character->GetMesh();
			FVector SpawnLocation = Mesh->GetComponentLocation();
			FRotator SpawnRotation = Mesh->GetComponentRotation();
            
			AActor* TrailObject = GetWorld()->SpawnActor<AActor>(
				Character->DodgeShadow, 
				SpawnLocation, 
				SpawnRotation, 
				SpawnParams
			);
            
			if (TrailObject)
			{
				TrailObject->SetLifeSpan(1);
				SpawnedTrailObjects.Add(TrailObject);
			}
	}
	if (Character->PersistingDodgeHitbox and !IsPerfectDodgeHitboxSpawned and DashTime>DodgeDelay)
	{
		IsPerfectDodgeHitboxSpawned = true;
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FVector SpawnLocation = Character->GetActorLocation();
		FRotator SpawnRotation = FRotator::ZeroRotator;

		DodgeHitbox = GetWorld()->SpawnActor<APersistingDodgeHitbox>(Character->PersistingDodgeHitbox, SpawnLocation, SpawnRotation, SpawnParams);
		DodgeHitbox->SetDestroyTime(PerfectDodgeWindow);
	}


	if (DashTime >= DashDuration)
	{
		if (FMath::Abs(Character->GetInputMoveX()) + FMath::Abs(Character->GetInputMoveY()) > 0.1f)
		{
			Character->isPerfectDodging = false;
			StateMachine->ChangeState(PlayerCharacterStateID::Walk);
			return;
		}
		else
		{
			Character->isPerfectDodging = false;
			StateMachine->ChangeState(PlayerCharacterStateID::Idle);
			return;
		}
	}
}

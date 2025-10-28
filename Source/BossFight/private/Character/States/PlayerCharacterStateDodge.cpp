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

	StateMachine->DodgeCooldown = PlayerMovementParameters->DodgeCooldown;

	if (Character->PersistingDodgeHitbox)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FVector SpawnLocation = Character->GetActorLocation();
		FRotator SpawnRotation = FRotator::ZeroRotator;

		APersistingDodgeHitbox* SpawnedActor = GetWorld()->SpawnActor<APersistingDodgeHitbox>(Character->PersistingDodgeHitbox, SpawnLocation, SpawnRotation, SpawnParams);
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

	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Red,
	FString::Printf(TEXT("X: %f, Y: %f"), Character->GetInputMoveX(),Character->GetInputMoveY())
	);

	DashTime += DeltaTime;
	float MinTime, MaxTime;
	DashEasing->GetTimeRange(MinTime, MaxTime);
	float NormalizedTime = FMath::Lerp(MinTime, MaxTime, DashTime / DashDuration);
	float Alpha = FMath::Clamp(DashEasing->GetFloatValue(NormalizedTime), 0.f, 1.f);
	FVector NewLocation = DashStartLocation + DashDirection * DashDistance * Alpha;
	Character->SetActorLocation(NewLocation, true);

	if (DashTime >= DashDuration)
	{
		if (FMath::Abs(Character->GetInputMoveX()) + FMath::Abs(Character->GetInputMoveY()) > 0.1f)
		{
			StateMachine->ChangeState(PlayerCharacterStateID::Walk);
			return;
		}
		else
		{
			StateMachine->ChangeState(PlayerCharacterStateID::Idle);
			return;
		}
	}
}

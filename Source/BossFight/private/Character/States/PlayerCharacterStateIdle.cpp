// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateIdle.h"

#include "Character/PlayerCharacter.h"


PlayerCharacterStateID UPlayerCharacterStateIdle::GetStateID()
{
	return PlayerCharacterStateID::Idle;
}

void UPlayerCharacterStateIdle::StateEnter(PlayerCharacterStateID PlayerStateID)
{
	Super::StateEnter(PlayerStateID);

	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Cyan,
	FString::Printf(TEXT("Enter StateIdle"))
	);
}

void UPlayerCharacterStateIdle::StateExit(PlayerCharacterStateID PlayerStateID)
{
	Super::StateExit(PlayerStateID);
	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Red,
	FString::Printf(TEXT("Exit StateIdle"))
	);
}

void UPlayerCharacterStateIdle::StateTick(float DeltaTime)
{
	Super::StateTick(DeltaTime);
	
	if (Character->GetInputDodgeBuffer())
	{
		StateMachine->ChangeState(PlayerCharacterStateID::Dodge);
		return;
	}
	if (FMath::Abs(Character->GetInputMoveX()) + FMath::Abs(Character->GetInputMoveY()) > 0.1f)
	{
		StateMachine->ChangeState(PlayerCharacterStateID::Walk);
		return;
	}
}


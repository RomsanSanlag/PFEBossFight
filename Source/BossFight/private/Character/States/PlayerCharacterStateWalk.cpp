// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateWalk.h"

#include "Character/PlayerCharacter.h"


PlayerCharacterStateID UPlayerCharacterStateWalk::GetStateID()
{
	return PlayerCharacterStateID::Walk;
}

void UPlayerCharacterStateWalk::StateEnter(PlayerCharacterStateID PlayerStateID)
{
	Super::StateEnter(PlayerStateID);

	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Cyan,
	FString::Printf(TEXT("Enter StateWalk"))
	);
}

void UPlayerCharacterStateWalk::StateExit(PlayerCharacterStateID PlayerStateID)
{
	Super::StateExit(PlayerStateID);
	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Red,
	FString::Printf(TEXT("Exit StateWalk"))
	);
}

void UPlayerCharacterStateWalk::StateTick(float DeltaTime)
{
	Super::StateTick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Red,
		FString::Printf(TEXT("X: %f, Y: %f"), Character->GetInputMoveX(),Character->GetInputMoveY())
	);
	if (FMath::Abs(Character->GetInputMoveX()) < 0.1f)
	{
		StateMachine->ChangeState(PlayerCharacterStateID::Idle);
	}
	else
	{
		FVector MovementDirection = FVector(Character->GetInputMoveX(), Character->GetInputMoveY(), 0);
		Character->AddMovementInput(MovementDirection);
	}
}


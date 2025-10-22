// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateDodge.h"


#include "Character/PlayerCharacter.h"


PlayerCharacterStateID UPlayerCharacterStateDodge::GetStateID()
{
	return PlayerCharacterStateID::Dodge;
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

	Character->LaunchCharacter(Character->GetActorForwardVector() * 2500, true, true);
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
}

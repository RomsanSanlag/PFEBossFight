// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateWalk.h"


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


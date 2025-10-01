// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/States/PlayerCharacterStateIdle.h"


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


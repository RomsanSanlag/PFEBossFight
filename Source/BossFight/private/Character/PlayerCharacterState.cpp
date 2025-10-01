// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterState.h"


// Sets default values for this component's properties
UPlayerCharacterState::UPlayerCharacterState()
{
	PrimaryComponentTick.bCanEverTick = false;
}

PlayerCharacterStateID UPlayerCharacterState::GetStateID()
{
	return PlayerCharacterStateID::None;
}

void UPlayerCharacterState::StateInit(UPlayerStateMachine* InitStateMachine)
{
	StateMachine = InitStateMachine;
	Character = InitStateMachine->GetCharacter();
	GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Magenta,
		FString::Printf(TEXT("InitState %d"), GetStateID())
	);
}

void UPlayerCharacterState::StateEnter(PlayerCharacterStateID PlayerStateID)
{
}

void UPlayerCharacterState::StateExit(PlayerCharacterStateID PlayerStateID)
{
}



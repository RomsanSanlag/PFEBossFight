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

}

void UPlayerCharacterState::StateEnter(PlayerCharacterStateID PlayerStateID)
{
}

void UPlayerCharacterState::StateExit(PlayerCharacterStateID PlayerStateID)
{
}

void UPlayerCharacterState::StateTick(float DeltaTime)
{
}



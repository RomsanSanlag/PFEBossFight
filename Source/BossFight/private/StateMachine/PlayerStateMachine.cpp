// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/StateMachine/PlayerStateMachine.h"

#include "BossFight/private/Character/PlayerCharacterState.h"
#include "BossFight/public/Character/PlayerCharacter.h"

void UPlayerStateMachine::Init(APlayerCharacter* inCharacter)
{
	Character = inCharacter;
	FindStates();
	InitStates();
}

APlayerCharacter* UPlayerStateMachine::GetCharacter() const
{
	return Character;
}

void UPlayerStateMachine::FindStates()
{
	TArray<UActorComponent*> FoundComponents = Character->K2_GetComponentsByClass(UPlayerCharacterState::StaticClass());
	for (UActorComponent* StateComponent : FoundComponents)
	{
		UPlayerCharacterState* CharacterState = Cast<UPlayerCharacterState>(StateComponent);
		if (CharacterState == nullptr) continue;
		if (CharacterState->GetStateID() == PlayerCharacterStateID::None) continue;

		AllStates.Add(CharacterState);
	}
}

void UPlayerStateMachine::InitStates()
{
	for (UPlayerCharacterState* CharacterState : AllStates)
	{
		CharacterState->StateInit(this);
	}
}


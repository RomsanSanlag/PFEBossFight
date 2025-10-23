// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/StateMachine/PlayerStateMachine.h"

#include "BossFight/private/Character/PlayerCharacterState.h"
#include "BossFight/public/Character/PlayerCharacter.h"

void UPlayerStateMachine::Init(APlayerCharacter* inCharacter)
{
	Character = inCharacter;
	FindStates();
	InitStates();

	ChangeState(PlayerCharacterStateID::Idle);
}

void UPlayerStateMachine::Tick(float DeltaTime)
{
	if (CurrentState == nullptr) return;
	CurrentState->StateTick(DeltaTime);
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

UPlayerCharacterState* UPlayerStateMachine::GetState(PlayerCharacterStateID StateID)
{
	for (UPlayerCharacterState* CharacterState : AllStates)
	{
		if (StateID == CharacterState->GetStateID())
		{
			return CharacterState;
		}
	}
	return nullptr;
}

void UPlayerStateMachine::TickDodgeCoolDown(float DeltaTime)
{
	DodgeCooldown -= DeltaTime;
	if (DodgeCooldown <= 0) DodgeCooldown = 0.0f;
}

void UPlayerStateMachine::ChangeState(PlayerCharacterStateID NextStateID)
{
	UPlayerCharacterState* NextState = GetState(NextStateID);



	if (NextState == nullptr) return;

	if  (CurrentState != nullptr)
	{
		CurrentState->StateExit(NextStateID);
	}

	PlayerCharacterStateID PreviousStateID = CurrentStateID;
	CurrentStateID = NextStateID;
	CurrentState = NextState;

	if (CurrentState != nullptr)
	{
		CurrentState->StateEnter(PreviousStateID);
	}
}


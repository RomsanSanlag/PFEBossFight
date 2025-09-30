// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossFight/public/Character/PlayerCharacterStateID.h"
#include "BossFight/public/StateMachine/PlayerStateMachine.h"
#include "PlayerCharacterState.generated.h"


UCLASS(Abstract)
class BOSSFIGHT_API UPlayerCharacterState : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPlayerCharacterState();

	virtual PlayerCharacterStateID GetStateID();

	virtual void StateInit(UPlayerStateMachine *InitStateMachine);

protected:
	UPROPERTY()
	TObjectPtr<APlayerCharacter> Character;

	UPROPERTY()
	TObjectPtr<UPlayerStateMachine> StateMachine;
};

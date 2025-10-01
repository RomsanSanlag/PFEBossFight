// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerStateMachine.generated.h"

/**
 * 
 */

class UPlayerCharacterState;
class APlayerCharacter;

UCLASS()
class BOSSFIGHT_API UPlayerStateMachine : public UObject
{
	GENERATED_BODY()

public:
	void Init(APlayerCharacter* inCharacter);

	APlayerCharacter* GetCharacter() const;

protected:
	UPROPERTY()
	TObjectPtr<APlayerCharacter> Character;

	TArray<UPlayerCharacterState*> AllStates;

	void FindStates();

	void InitStates();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterStateID.h"
#include "UObject/Object.h"
#include "PlayerStateMachine.generated.h"

/**
 * 
 */

enum class PlayerCharacterStateID : uint8;
class UPlayerCharacterState;
class APlayerCharacter;

UCLASS()
class BOSSFIGHT_API UPlayerStateMachine : public UObject
{
	GENERATED_BODY()

public:
	void Init(APlayerCharacter* inCharacter);

	void Tick(float DeltaTime);

	APlayerCharacter* GetCharacter() const;

	UFUNCTION(BlueprintCallable)
	void ChangeState(PlayerCharacterStateID NextStateID);

	UPlayerCharacterState* GetState(PlayerCharacterStateID StateID);

protected:
	UPROPERTY()
	TObjectPtr<APlayerCharacter> Character;

	TArray<UPlayerCharacterState*> AllStates;

	UPROPERTY(BlueprintReadOnly)
	PlayerCharacterStateID CurrentStateID;

	UPROPERTY()
	TObjectPtr<UPlayerCharacterState> CurrentState;

	void FindStates();

	void InitStates();
};

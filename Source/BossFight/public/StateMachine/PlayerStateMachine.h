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

UCLASS(BlueprintType)
class BOSSFIGHT_API UPlayerStateMachine : public UObject
{
	GENERATED_BODY()

public:
	// Nombre max de charges
	UPROPERTY()
	int MaxDodgeCharges = 3;

	// Charges actuelles
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int StartingDodgeCharges = 3;

	// Temps de recharge d'une charge
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DodgeChargeRechargeTime = 1.0f;

	// Timer interne pour la recharge
	UPROPERTY(BlueprintReadOnly)
	float DodgeChargeRechargeTimer = 0.0f;

	// Cooldown mini entre deux dashs (si charges dispo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DodgeCooldown = 0.25f;

	// Timer interne pour ce cooldown
	UPROPERTY(BlueprintReadOnly)
	float DodgeCooldownTimer = 0.0f;


	void InitParameters();
	void Init(APlayerCharacter* inCharacter);

	void Tick(float DeltaTime);

	APlayerCharacter* GetCharacter() const;

	UFUNCTION(BlueprintCallable)
	void ChangeState(PlayerCharacterStateID NextStateID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "State Machine")
	PlayerCharacterStateID GetCurrentStateID() const { return CurrentStateID; }

	UPlayerCharacterState* GetState(PlayerCharacterStateID StateID);
	void TickDodgeCoolDown(float DeltaTime);

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
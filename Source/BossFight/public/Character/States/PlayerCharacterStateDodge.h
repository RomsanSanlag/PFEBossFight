// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Character/MovementParameters/PlayerMovementParameters.h>

#include "CoreMinimal.h"
#include "BossFight/private/Character/PlayerCharacterState.h"
#include "PlayerCharacterStateDodge.generated.h"


UCLASS(ClassGroup=(PlayerCharacterState), meta=(BlueprintSpawnableComponent))
class BOSSFIGHT_API UPlayerCharacterStateDodge : public UPlayerCharacterState
{
	GENERATED_BODY()

public:
	virtual PlayerCharacterStateID GetStateID() override;

	virtual void StateEnter(PlayerCharacterStateID PlayerStateID) override;

	virtual void StateExit(PlayerCharacterStateID PlayerStateID) override;

	virtual void StateInit(UPlayerStateMachine* InStateMachine) override;

	virtual void StateTick(float DeltaTime) override;

protected:
	UPlayerMovementParameters* PlayerMovementParameters;
	// === PARAMÈTRES DE DODGE ===
	float DashDuration;
	float DashDistance;
	UCurveFloat* DashEasing;

private:
	// === VARIABLES INTERNES ===
	float DashTime;
	FVector DashStartLocation;
	FVector DashDirection;
};


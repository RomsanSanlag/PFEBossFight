// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BossFight/private/Character/PlayerCharacterState.h"
#include "Character/PlayerCharacter.h"
#include "PlayerCharacterStateWalk.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BOSSFIGHT_API UPlayerCharacterStateWalk : public UPlayerCharacterState
{
    GENERATED_BODY()

public:
    virtual PlayerCharacterStateID GetStateID() override;
    virtual void StateInit(UPlayerStateMachine* InStateMachine) override;
    virtual void StateEnter(PlayerCharacterStateID PreviousStateID) override;
    virtual void StateExit(PlayerCharacterStateID NextStateID) override;
    virtual void StateTick(float DeltaTime) override;

protected:
    UPlayerMovementParameters* PlayerMovementParameters;
    // === PARAMÈTRES DE VITESSE ===
    float MaxWalkSpeed;
    float AccelerationDuration;
    float DeccelerationForce;
    float AccelerationForce;

private:
    // === VARIABLES INTERNES ===
    
    float CurrentSpeed;
    float AccelerationTime;
    FVector LastMoveDirection;
};
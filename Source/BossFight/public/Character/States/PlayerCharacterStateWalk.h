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
    float WalkSpeed;
    float WalkAcceleration;
    float WalkBrakingDeceleration;
    float WalkGroundFriction;

    // === PARAMÈTRES D'ACCÉLÉRATION ===
    EAccelerationCurve AccelerationCurveType;
    float AccelerationDuration;

    // === PARAMÈTRES DE CHANGEMENT DE DIRECTION ===
    float DirectionChangeThreshold;
    float DirectionChangeDuration;
    float DirectionChangeDecelerationDuration;
    float TurnDecelerationFrictionMultiplier;
    float TurnVelocityRetention;
private:
    // === VARIABLES INTERNES ===
    
    float CurrentSpeed;
    float AccelerationTime;
    FVector LastInputDirection;
    
    bool bIsChangingDirection;
    float DirectionChangeTimer;

    // === FONCTIONS HELPER ===
    
    void DetectDirectionChange(const FVector& NewDirection, float DeltaTime);
    float CalculateSpeedMultiplier(float Time);
};
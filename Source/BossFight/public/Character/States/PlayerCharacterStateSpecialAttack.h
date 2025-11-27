// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BossFight/private/Character/PlayerCharacterState.h"
#include "CoreMinimal.h"
#include "Character/PlayerCharacter.h"
#include "PlayerCharacterStateSpecialAttack.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BOSSFIGHT_API UPlayerCharacterStateSpecialAttack : public UPlayerCharacterState
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
	float TimeToSlowDown;
	
	float TimeToChargeSpecialAttack;
	float MaxTimeToHoldAttack;
	float StunAfterAttack;
	float CancelWindow;
	
	
	float InitialSpeed = 0.f;
	float CurrentSlowDownTime = 0.f;
	FVector SlowDownDirection = FVector::ZeroVector;
	UActorComponent* AttackOrigin;

	// VFX spawnés
	AActor* SpawnedVFX = nullptr;  // VFX de charge
	AActor* HoldVFX = nullptr;     // VFX de maintien
	AActor* ShootVFX = nullptr;    // VFX de tir

	// Timers pour les phases
	float CurrentChargeTime = 0.f;
	float CurrentHoldTime = 0.f;
	bool bIsCharging = true;
	bool bIsHolding = false;
	bool bHasShot = false;
	bool bIsCommitted = false;

private:
	float w;
	float InitialMouseSensitivity;
};
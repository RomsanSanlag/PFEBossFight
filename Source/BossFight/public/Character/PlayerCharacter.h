// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BossFight/public/StateMachine/PlayerStateMachine.h"
#include "Parameters/UPlayerMovementConfig.h"
#include "PlayerCharacter.generated.h"

class UPlayerStateMachine;

UCLASS()
class BOSSFIGHT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

#pragma region Unreal Default
public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion

#pragma region State Machine

public:
	void CreateStateMachine();

	void InitStateMachine();

	void TickStateMachine(float DeltaTime) const;

	UPROPERTY(EditAnywhere)
	UPlayerMovementConfig* PlayerMovementConfig;

protected:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UPlayerStateMachine> StateMachine;

#pragma endregion
};
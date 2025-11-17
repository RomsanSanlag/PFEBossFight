// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BossFight/BossFightCharacter.h"
#include "GameFramework/Character.h"
#include "BossFight/public/StateMachine/PlayerStateMachine.h"
#include "Features/PersistingDodgeHitbox.h"
#include "Inputs/PlayerCharacterInputData.h"
#include "MovementParameters/PlayerMovementParameters.h"
#include "PlayerCharacter.generated.h"

class UPlayerStateMachine;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnTakeDamageNative, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPerfectDodge, float);

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
	UPlayerMovementParameters* PlayerMovementParameters;

	UPROPERTY(EditAnywhere)
	UClass* PersistingDodgeHitbox;

	UFUNCTION(BlueprintCallable, Category="Events")
	void TriggerOnTakeDamage(float DamageAmount);
	UFUNCTION(BlueprintCallable, Category="Events")
	void TriggerOnPerfectDodge(float DamageAmount);
	
	void TriggerTimeDilation();

protected:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UPlayerStateMachine> StateMachine;

#pragma endregion
#pragma region HealthSystem
public:
	UFUNCTION(BlueprintCallable, Category = "Health")
	int GetLifePoint() const;
protected:
	int LifePoint;
	UPROPERTY()
	int LifePointMax = 5;
	void ReduceLifePoint(int DamageAmount);
#pragma region Input Data / Mapping Context
public:
	UPROPERTY()
	TObjectPtr<UInputMappingContext> InputMappingContext;

	UPROPERTY()
	TObjectPtr<UPlayerCharacterInputData> InputData;

protected:
	void SetupMappingContextIntoController() const;
	void SetupInputs();
#pragma region InputMove
public:

	FOnTakeDamageNative OnTakeDamageNative;
	FOnPerfectDodge OnPerfectDodge;
	
	float GetInputMoveX() const;
	float GetInputMoveY() const;
	float GetInputDodgeBuffer() const;

protected:
	UPROPERTY()
	float InputMoveX = 0.f;
	
	UPROPERTY()
	float InputMoveY = 0.f;

	UPROPERTY()
	float InputDodgeBuffer = 0.f;

	

private:
	void OnInputMoveX(const FInputActionValue& InputActionValue);
	void OnInputMoveXCompleted(const FInputActionValue& InputActionValue);
	void BindInputMoveXAxisAndActions(UEnhancedInputComponent* EnhancedInputComponent);

	void OnInputMoveY(const FInputActionValue& InputActionValue);
	void OnInputMoveYCompleted(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& Value);
	void BindInputMoveYAxisActions(UEnhancedInputComponent* EnhancedInputComponent);
	void BindInputDodge(UEnhancedInputComponent* EnhancedInputComponent);
	void BindInputLookActions(UEnhancedInputComponent* EnhancedInputComponent);
	void OnInputDodge(const FInputActionValue& InputActionValue);

#pragma endregion

#pragma endregion
};
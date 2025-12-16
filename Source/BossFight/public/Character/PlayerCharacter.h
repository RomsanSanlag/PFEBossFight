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
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnLaserLaunched(AActor* OtherActor);
	// Sets default values for this character's properties
	APlayerCharacter();
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnDomagePlayer(int PV);
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnHealPlayer();
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnDashPlayer();

	bool CanInstantspecialAttack = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void SetInvicibleAfterHit();
	
	void TickInvicibility(float DeltaTime);
	void TickSpecialAttackWindow(float DeltaTime);
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
	UPROPERTY(EditAnywhere)
	UClass* DodgeShadow;
	UPROPERTY(EditAnywhere)
	UClass* SpecialAttackVFX;
	UPROPERTY(EditAnywhere)
	UClass* HoldVFX;
	UPROPERTY(EditAnywhere)
	UClass* ShootVFX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDodging = false;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void LockAllInputs();
    
	UFUNCTION(BlueprintCallable, Category = "Input")
	void UnlockAllInputs();
    
	// Functions to lock/unlock individual inputs
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetInputLock(bool bLockMove, bool bLockDodge, bool bLockSpecialAttack, bool bLockLook);
	

	UFUNCTION(BlueprintCallable, Category="Events")
	void TriggerOnTakeDamage(float DamageAmount);
	UFUNCTION(BlueprintCallable, Category="Events")
	void TriggerOnPerfectDodge(float DamageAmount);
	UFUNCTION(BlueprintCallable, Category="Events")
	void TriggerOnHeal(int HealsAmounts);
	
	
	void TriggerTimeDilation();

	bool isPerfectDodging = false;
protected:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UPlayerStateMachine> StateMachine;

#pragma endregion
#pragma region HealthSystem
public:
	UFUNCTION(BlueprintCallable, Category = "Health")
	int GetLifePoint() const;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isInvincible = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InvicibilityTimer = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpecialAttackTimer = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpecialAttacking = false;
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnCameraTransition(int indexToGo);
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnCameraShake(bool isSlowShake, float intensity);
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnCameraShakeStop();

	bool bSpecialAttackConsumed = false;
	
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
	
	// Input lock booleans
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bInputMoveXLocked = false;
    
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bInputMoveYLocked = false;
    
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bInputDodgeLocked = false;
    
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bInputSpecialAttackLocked = false;
    
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bInputLookLocked = false;
#pragma region InputMove
public:

	FOnTakeDamageNative OnTakeDamageNative;
	FOnPerfectDodge OnPerfectDodge;
	
	float GetInputMoveX() const;
	float GetInputMoveY() const;
	float GetInputDodgeBuffer() const;
	float GetInputSpecialAttack() const;

	float MouseSensitivity = 1.f;

protected:
	UPROPERTY()
	float InputMoveX = 0.f;
	
	UPROPERTY()	
	float InputMoveY = 0.f;

	UPROPERTY()
	bool InputDodgeBuffer = false;
	
	UPROPERTY()
	bool InputSpecialAttackBuffer = false;

	

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

	void BindInputSpecialAttack(UEnhancedInputComponent* EnhancedInputComponent);
	void OnInputSpecialAttack(const FInputActionValue& InputActionValue);

#pragma endregion

#pragma endregion
};
// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Character/Settings/PlayerCharacterSettings.h"
#include "InputMappingContext.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Slate/SGameLayerManager.h"



// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CreateStateMachine();
	InitStateMachine();
	LifePoint = LifePointMax;
}



// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickStateMachine(DeltaTime);
	TickInvicibility(DeltaTime);
	TickSpecialAttackWindow(DeltaTime);
}
void APlayerCharacter::SetInvicibleAfterHit()
{
	InvicibilityTimer = PlayerMovementParameters->InvincibilityTimeAfterHit;
}
void APlayerCharacter::TickInvicibility(float DeltaTime)
{
	isInvincible = InvicibilityTimer>0.f or forced;
	if (isInvincible)
	{
		InvicibilityTimer -= DeltaTime;
		if (InvicibilityTimer <= 0.f) InvicibilityTimer = 0.f;
	}
}

void APlayerCharacter::TickSpecialAttackWindow(float DeltaTime)
{
	CanInstantspecialAttack = SpecialAttackTimer>0.f;
	if (CanInstantspecialAttack)
	{
		SpecialAttackTimer -= DeltaTime;
		if (SpecialAttackTimer <= 0.f) SpecialAttackTimer = 0.f;
	}
}

int APlayerCharacter::GetLifePoint() const
{
	return LifePoint;
}
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	SetupInputs();
	SetupMappingContextIntoController();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent == nullptr) return;

	BindInputMoveXAxisAndActions(EnhancedInputComponent);
	BindInputMoveYAxisActions(EnhancedInputComponent);
	BindInputLookActions(EnhancedInputComponent);
	BindInputDodge(EnhancedInputComponent);
	BindInputSpecialAttack(EnhancedInputComponent);
}

void APlayerCharacter::CreateStateMachine()
{
	StateMachine = NewObject<UPlayerStateMachine>(this);
}

void APlayerCharacter::InitStateMachine()
{
	if (StateMachine == nullptr) return;
	StateMachine->Init(this);

	OnTakeDamageNative.AddLambda([](float Damage)
{
});
	OnPerfectDodge.AddLambda([](float Damage)
{
});
}

void APlayerCharacter::TickStateMachine(float DeltaTime) const
{
	if (StateMachine == nullptr) return;
	StateMachine->TickDodgeCoolDown(DeltaTime);
	StateMachine->Tick(DeltaTime);
}

void APlayerCharacter::SetIsInvincible(bool set)
{
	forced = set;
	isInvincible = set;
}

bool APlayerCharacter::GetIsInvincible()
{
	return isInvincible;
}
void APlayerCharacter::TriggerOnTakeDamage(float DamageAmount)
{
	if (isInvincible) return;
	OnCameraShake(false,1);
	OnTakeDamageNative.Broadcast(DamageAmount);
	ReduceLifePoint(DamageAmount);
}
void APlayerCharacter::TriggerOnHeal(int HealsAmounts)
{
	LifePoint += HealsAmounts;
	if (LifePoint > LifePointMax) LifePoint = LifePointMax; 
	OnHealPlayer();
}

void APlayerCharacter::ReduceLifePoint(int DamageAmount = 1)
{
	LifePoint -= DamageAmount;
	if (LifePoint < 0) LifePoint = 0; 
	OnDomagePlayer(LifePoint);// game over a mettre plus tard
}


void APlayerCharacter::TriggerOnPerfectDodge(float DamageAmount)
{
	OnPerfectDodge.Broadcast(DamageAmount);
	OnCameraTransition(1);
	TriggerTimeDilation();
}

void APlayerCharacter::TriggerTimeDilation()
{
	UCameraComponent* Camera = GetComponentByClass<UCameraComponent>();
	if (Camera)
	{
		// Active l'effet noir et blanc
		Camera->PostProcessSettings.bOverride_ColorSaturation = true;
		Camera->PostProcessSettings.ColorSaturation = FVector4(0.0f, 0.0f, 0.0f, 1.0f);
	}
    
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), PlayerMovementParameters->TimeDilationDuringSlow);
	isPerfectDodging = true;
    
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(
	   TimerHandle,
	   [this, Camera]() {
		  UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
          
		  // Restaure les couleurs normales
		  if (Camera)
		  {
			  Camera->PostProcessSettings.bOverride_ColorSaturation = false;
		  }
	   },
	   PlayerMovementParameters->TimeSlowDuration,
	   false
	);
}
void APlayerCharacter::SetupMappingContextIntoController() const
{
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController == nullptr) return;

	ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
	if (LocalPlayer == nullptr) return;

	UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (InputSystem == nullptr) return;

	InputSystem->AddMappingContext(InputMappingContext, 0);
}

void APlayerCharacter::SetupInputs()
{
	const UPlayerCharacterSettings* CharacterSettings = GetDefault<UPlayerCharacterSettings>();
	if (CharacterSettings == nullptr) return;
	InputMappingContext = CharacterSettings->InputMappingContext.LoadSynchronous();
	InputData = CharacterSettings->InputData.LoadSynchronous();
}

float APlayerCharacter::GetInputMoveX() const
{
	return InputMoveX;
}

float APlayerCharacter::GetInputMoveY() const
{
	return InputMoveY;
}

float APlayerCharacter::GetInputDodgeBuffer() const
{
	return InputDodgeBuffer;
}

float APlayerCharacter::GetInputSpecialAttack() const
{
	return InputSpecialAttackBuffer;
}

void APlayerCharacter::BindInputMoveXAxisAndActions(UEnhancedInputComponent* EnhancedInputComponent)
{
	if (InputData == nullptr) return;

	if (InputData->InputActionMoveX)
	{
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveX,
			ETriggerEvent::Started,
			this,
			&APlayerCharacter::OnInputMoveX
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveX,
			ETriggerEvent::Triggered,
			this,
			&APlayerCharacter::OnInputMoveX
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveX,
			ETriggerEvent::Completed,
			this,
			&APlayerCharacter::OnInputMoveXCompleted
		);
	}
}

void APlayerCharacter::BindInputMoveYAxisActions(UEnhancedInputComponent* EnhancedInputComponent)
{
	if (InputData == nullptr) return;

	if (InputData->InputActionMoveY)
	{
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveY,
			ETriggerEvent::Started,
			this,
			&APlayerCharacter::OnInputMoveY
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveY,
			ETriggerEvent::Triggered,
			this,
			&APlayerCharacter::OnInputMoveY
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionMoveY,
			ETriggerEvent::Completed,
			this,
			&APlayerCharacter::OnInputMoveYCompleted
		);
	}
}

void APlayerCharacter::BindInputDodge(UEnhancedInputComponent* EnhancedInputComponent)
{
	if (InputData == nullptr) return;

	if (InputData->InputActionDodgeBuffer)
	{
		EnhancedInputComponent->BindAction(
			InputData->InputActionDodgeBuffer,
			ETriggerEvent::Started,
			this,
			&APlayerCharacter::OnInputDodge
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionDodgeBuffer,
			ETriggerEvent::Triggered,
			this,
			&APlayerCharacter::OnInputDodge
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionDodgeBuffer,
			ETriggerEvent::Completed,
			this,
			&APlayerCharacter::OnInputDodge
		);
	}
}

void APlayerCharacter::LockAllInputs()
{
	bInputMoveXLocked = true;
	bInputMoveYLocked = true;
	bInputDodgeLocked = true;
	bInputSpecialAttackLocked = true;
	bInputLookLocked = true;
}

void APlayerCharacter::UnlockAllInputs()
{
	bInputMoveXLocked = false;
	bInputMoveYLocked = false;
	bInputDodgeLocked = false;
	bInputSpecialAttackLocked = false;
	bInputLookLocked = false;
}

void APlayerCharacter::SetInputLock(bool bLockMove, bool bLockDodge, bool bLockSpecialAttack, bool bLockLook)
{
	bInputMoveXLocked = bLockMove;
	bInputMoveYLocked = bLockMove;
	bInputDodgeLocked = bLockDodge;
	bInputSpecialAttackLocked = bLockSpecialAttack;
	bInputLookLocked = bLockLook;
}

void APlayerCharacter::BindInputLookActions(UEnhancedInputComponent* EnhancedInputComponent)
{
	EnhancedInputComponent->BindAction(InputData->InputActionLook, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
}

void APlayerCharacter::OnInputDodge(const FInputActionValue& InputActionValue)
{
	if (bInputDodgeLocked)
	{
		InputDodgeBuffer = false;
		return;
	}
	InputDodgeBuffer = InputActionValue.Get<bool>();
}

void APlayerCharacter::BindInputSpecialAttack(UEnhancedInputComponent* EnhancedInputComponent)
{
	if (InputData == nullptr) return;

	if (InputData->InputActionSpecialAttackBuffer)
	{
		EnhancedInputComponent->BindAction(
			InputData->InputActionSpecialAttackBuffer,
			ETriggerEvent::Started,
			this,
			&APlayerCharacter::OnInputSpecialAttack
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionSpecialAttackBuffer,
			ETriggerEvent::Triggered,
			this,
			&APlayerCharacter::OnInputSpecialAttack
		);
		EnhancedInputComponent->BindAction(
			InputData->InputActionSpecialAttackBuffer,
			ETriggerEvent::Completed,
			this,
			&APlayerCharacter::OnInputSpecialAttack
		);
	}
}

void APlayerCharacter::OnInputSpecialAttack(const FInputActionValue& InputActionValue)
{
	if (bInputSpecialAttackLocked)
	{
		InputSpecialAttackBuffer = false;
		return;
	}

	bool bIsPressed = InputActionValue.Get<bool>();

	// Quand le bouton est PRESSÉ pour la première fois
	if (bIsPressed && !InputSpecialAttackBuffer)
	{
		bSpecialAttackConsumed = false;
	}

	// Quand le bouton est RELÂCHÉ
	if (!bIsPressed)
	{
		bSpecialAttackConsumed = false; // Autorise une nouvelle attaque
	}

	InputSpecialAttackBuffer = bIsPressed;
}


void APlayerCharacter::OnInputMoveX(const FInputActionValue& InputActionValue)
{
	if (bInputMoveXLocked)
	{
		InputMoveX = 0;
		return;
	}
	InputMoveX = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveY(const FInputActionValue& InputActionValue)
{
	if (bInputMoveYLocked)
	{
		InputMoveY = 0;
		return;
	}
	InputMoveY = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveXCompleted(const FInputActionValue& InputActionValue)
{
	if (bInputMoveXLocked)
	{
		InputMoveX = 0;
		return;
	}
	InputMoveX = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveYCompleted(const FInputActionValue& InputActionValue)
{
	if (bInputMoveYLocked)
	{
		InputMoveY = 0;
		return;
	}
	InputMoveY = InputActionValue.Get<float>();
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	if (bInputLookLocked) return;
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	AddControllerYawInput(LookAxisVector.X*MouseSensitivity);
	AddControllerPitchInput(LookAxisVector.Y*MouseSensitivity);
	
	FRotator ControlRotation = GetControlRotation();
	FRotator TargetRotation(0.f, ControlRotation.Yaw, 0.f);
	SetActorRotation(TargetRotation);
}



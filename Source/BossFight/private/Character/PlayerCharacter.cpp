// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Character/Settings/PlayerCharacterSettings.h"
#include "InputMappingContext.h"
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
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickStateMachine(DeltaTime);
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
}

void APlayerCharacter::CreateStateMachine()
{
	StateMachine = NewObject<UPlayerStateMachine>(this);
}

void APlayerCharacter::InitStateMachine()
{
	if (StateMachine == nullptr) return;
	StateMachine->Init(this);
}

void APlayerCharacter::TickStateMachine(float DeltaTime) const
{
	if (StateMachine == nullptr) return;
	StateMachine->Tick(DeltaTime);
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

void APlayerCharacter::BindInputLookActions(UEnhancedInputComponent* EnhancedInputComponent)
{
	EnhancedInputComponent->BindAction(InputData->InputActionLook, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
}

void APlayerCharacter::OnInputMoveX(const FInputActionValue& InputActionValue)
{
	InputMoveX = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveY(const FInputActionValue& InputActionValue)
{
	InputMoveY = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveXCompleted(const FInputActionValue& InputActionValue)
{
	InputMoveX = InputActionValue.Get<float>();
}

void APlayerCharacter::OnInputMoveYCompleted(const FInputActionValue& InputActionValue)
{
	InputMoveY = InputActionValue.Get<float>();
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	GEngine->AddOnScreenDebugMessage(
	-1,
	3.f,
	FColor::Purple,
	FString::Printf(TEXT("X: %f, Y: %f"), LookAxisVector.X,LookAxisVector.Y)
	);
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
	
	FRotator ControlRotation = GetControlRotation();
	FRotator TargetRotation(0.f, ControlRotation.Yaw, 0.f);
	SetActorRotation(TargetRotation);
}



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
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Took damage!"));
});
	OnPerfectDodge.AddLambda([](float Damage)
{
GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, TEXT("Perfect Dodge!"));
});
}

void APlayerCharacter::TickStateMachine(float DeltaTime) const
{
	if (StateMachine == nullptr) return;
	StateMachine->TickDodgeCoolDown(DeltaTime);
	StateMachine->Tick(DeltaTime);
}

void APlayerCharacter::TriggerOnTakeDamage(float DamageAmount)
{
	OnTakeDamageNative.Broadcast(DamageAmount);
	ReduceLifePoint(DamageAmount);
}

void APlayerCharacter::ReduceLifePoint(int DamageAmount = 1)
{
	LifePoint -= DamageAmount;
	if (LifePoint < 0) LifePoint = 0; // game over a mettre plus tard
}

void APlayerCharacter::TriggerOnPerfectDodge(float DamageAmount)
{
	OnPerfectDodge.Broadcast(DamageAmount);
	TriggerTimeDilation();
}


void APlayerCharacter::TriggerTimeDilation()
{
	UCameraComponent* Camera = GetComponentByClass<UCameraComponent>();
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), PlayerMovementParameters->TimeDilationDuringSlow);
	Camera->PostProcessSettings.bOverride_ColorSaturation = true;
	Camera->PostProcessSettings.ColorSaturation = FVector4(0.0f, 0.0f, 0.0f, 1.0f);
	
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(
		TimerHandle,
		[this, Camera]() {
			UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
			Camera->PostProcessSettings.ColorSaturation = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
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

void APlayerCharacter::BindInputLookActions(UEnhancedInputComponent* EnhancedInputComponent)
{
	EnhancedInputComponent->BindAction(InputData->InputActionLook, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
}

void APlayerCharacter::OnInputDodge(const FInputActionValue& InputActionValue)
{
	InputDodgeBuffer = InputActionValue.Get<bool>();
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
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
	
	FRotator ControlRotation = GetControlRotation();
	FRotator TargetRotation(0.f, ControlRotation.Yaw, 0.f);
	SetActorRotation(TargetRotation);
}



// Fill out your copyright notice in the Description page of Project Settings.

#include "BossFight/Public/Character/States/PlayerCharacterStateWalk.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

PlayerCharacterStateID UPlayerCharacterStateWalk::GetStateID()
{
    return PlayerCharacterStateID::Walk;
}

void UPlayerCharacterStateWalk::StateInit(UPlayerStateMachine* InStateMachine)
{
    Super::StateInit(InStateMachine);
    PlayerMovementParameters = Character->PlayerMovementParameters;
}


void UPlayerCharacterStateWalk::StateEnter(PlayerCharacterStateID PreviousStateID)
{
    Super::StateEnter(PreviousStateID);

    // === PARAMÈTRES DE VITESSE ===
    
    WalkSpeed = PlayerMovementParameters->WalkSpeed;
    WalkAcceleration = PlayerMovementParameters->WalkAcceleration;
    WalkBrakingDeceleration = PlayerMovementParameters->WalkBrakingDeceleration;
    WalkGroundFriction = PlayerMovementParameters->WalkGroundFriction;
    
    // === PARAMÈTRES D'ACCÉLÉRATION ===
    
    AccelerationCurveType = PlayerMovementParameters->AccelerationCurveType;
    AccelerationDuration = PlayerMovementParameters->AccelerationDuration;

    // === PARAMÈTRES DE CHANGEMENT DE DIRECTION ===

    DirectionChangeThreshold = PlayerMovementParameters->DirectionChangeThreshold;
    DirectionChangeDuration = PlayerMovementParameters->DirectionChangeDuration;
    DirectionChangeDecelerationDuration = PlayerMovementParameters->DirectionChangeDecelerationDuration;
    TurnDecelerationFrictionMultiplier = PlayerMovementParameters->TurnDecelerationFrictionMultiplier;
    

    UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
    if (!Movement) return;

    // === PARAMÈTRES DE GAMEFEEL ===
    
    // Vitesse de marche (ajustable)
    Movement->MaxWalkSpeed = WalkSpeed;
    
    // Accélération progressive (pas trop rapide pour la marche)
    Movement->MaxAcceleration = WalkAcceleration;
    
    // Décélération au freinage (réactive mais pas brutale)
    Movement->BrakingDecelerationWalking = WalkBrakingDeceleration;
    
    // Friction : contrôle l'inertie (plus haut = moins de glisse)
    Movement->GroundFriction = WalkGroundFriction;
    
    
    // Permet de tourner en marchant (plus naturel)
    Movement = Character->GetCharacterMovement();
    if (Movement)
    {
        Movement->bOrientRotationToMovement = true;
        Movement->bUseControllerDesiredRotation = false;
    }

    Character->bUseControllerRotationYaw = false;

    // Reset des timers pour une entrée propre
    AccelerationTime = 0.f;
    CurrentSpeed = Movement->Velocity.Size();
    bIsChangingDirection = false;
    DirectionChangeTimer = 0.f;

    GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, 
        FString::Printf(TEXT("Enter StateWalk")));
}

void UPlayerCharacterStateWalk::StateExit(PlayerCharacterStateID NextStateID)
{
    Super::StateExit(NextStateID);
    
    GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, 
        FString::Printf(TEXT("Exit StateWalk")));
}

void UPlayerCharacterStateWalk::StateTick(float DeltaTime)
{
    Super::StateTick(DeltaTime);
    

    UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
    if (!Movement) return;
    
    float InputX = Character->GetInputMoveX();
    float InputY = Character->GetInputMoveY();
    float InputMagnitude = FMath::Sqrt(InputX * InputX + InputY * InputY);

    FVector RawInputDirection = FVector(InputX, InputY, 0.f);
    FVector InputDirection = RawInputDirection.GetSafeNormal();

    DetectDirectionChange(InputDirection, DeltaTime);

    AccelerationTime += DeltaTime;
    float SpeedMultiplier = CalculateSpeedMultiplier(AccelerationTime);

    if (bIsChangingDirection)
    {
        DirectionChangeTimer += DeltaTime;

        if (DirectionChangeTimer < DirectionChangeDecelerationDuration)
        {
            float DecelerationProgress = DirectionChangeTimer / DirectionChangeDecelerationDuration;
            float DecelerationMultiplier = 1.f - DecelerationProgress; // plus doux que le quad

            SpeedMultiplier *= DecelerationMultiplier;

            Movement->GroundFriction = WalkGroundFriction * TurnDecelerationFrictionMultiplier;
        }
        else
        {
            float ReaccelerationTime = DirectionChangeTimer - DirectionChangeDecelerationDuration;
            float ReaccelerationDuration = DirectionChangeDuration - DirectionChangeDecelerationDuration;

            if (ReaccelerationDuration > 0.f)
            {
                float ReaccelerationProgress = FMath::Clamp(
                    ReaccelerationTime / ReaccelerationDuration,
                    0.f,
                    1.f
                );

                float ReaccelerationMultiplier = ReaccelerationProgress;
                SpeedMultiplier *= ReaccelerationMultiplier;
            }

            Movement->GroundFriction = FMath::Lerp(
                WalkGroundFriction * TurnDecelerationFrictionMultiplier,
                WalkGroundFriction,
                (DirectionChangeTimer - DirectionChangeDecelerationDuration) / ReaccelerationDuration
            );
        }

        if (DirectionChangeTimer >= DirectionChangeDuration)
        {
            bIsChangingDirection = false;
            DirectionChangeTimer = 0.f;
            Movement->GroundFriction = WalkGroundFriction;
        }
    }

    float TargetSpeed = WalkSpeed * SpeedMultiplier;

    if (InputMagnitude > 0.1)
    {
        CurrentSpeed = FMath::FInterpTo(CurrentSpeed, TargetSpeed, DeltaTime, 6.f);
        Movement->MaxWalkSpeed = CurrentSpeed;

        float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
        Character->AddMovementInput(InputDirection, ClampedMagnitude);
    }
    else
    {
        CurrentSpeed = Movement->Velocity.Size();
    }

    LastInputDirection = InputDirection;
    
    if (CurrentSpeed < 5.f && InputMagnitude < 0.1)
    {
        StateMachine->ChangeState(PlayerCharacterStateID::Idle);
        return;
    }

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, 
        FString::Printf(TEXT("Speed: %.0f | Target: %.0f | Mult: %.2f"), 
        CurrentSpeed, TargetSpeed, SpeedMultiplier));
}


void UPlayerCharacterStateWalk::DetectDirectionChange(const FVector& NewDirection, float DeltaTime)
{
    if (LastInputDirection.IsNearlyZero()) 
    {
        LastInputDirection = NewDirection;
        return;
    }
    
    float DotProduct = FVector::DotProduct(LastInputDirection, NewDirection);
    float AngleDifference = FMath::Acos(FMath::Clamp(DotProduct, -1.f, 1.f));
    float AngleDegrees = FMath::RadiansToDegrees(AngleDifference);

    if (AngleDegrees > DirectionChangeThreshold && !bIsChangingDirection)
    {
        bIsChangingDirection = true;
        DirectionChangeTimer = 0.f;

        CurrentSpeed *= PlayerMovementParameters->TurnVelocityRetention;

        AccelerationTime *= PlayerMovementParameters->TurnVelocityRetention;

        GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, 
            FString::Printf(TEXT("Direction Change! Angle: %.0f° | Speed kept: %.0f"), 
            AngleDegrees, CurrentSpeed));
    }
}

float UPlayerCharacterStateWalk::CalculateSpeedMultiplier(float Time)
{
    if (Time >= AccelerationDuration)
    {
        return 1.f; // Vitesse max atteinte
    }

    // Courbe d'accélération (ease-out cubic pour un démarrage punchy)
    float NormalizedTime = Time / AccelerationDuration;
    
    switch (AccelerationCurveType)
    {
        case EAccelerationCurve::Linear:
            return NormalizedTime;
            
        case EAccelerationCurve::EaseInQuad:
            return NormalizedTime * NormalizedTime;
            
        case EAccelerationCurve::EaseOutQuad:
            return 1.f - (1.f - NormalizedTime) * (1.f - NormalizedTime);
            
        case EAccelerationCurve::EaseInOutCubic:
            if (NormalizedTime < 0.5f)
                return 4.f * NormalizedTime * NormalizedTime * NormalizedTime;
            else
                return 1.f - FMath::Pow(-2.f * NormalizedTime + 2.f, 3.f) / 2.f;
            
        default:
            return NormalizedTime;
    }
}
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

    UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
    if (!Movement) return;

    MaxWalkSpeed = PlayerMovementParameters->MaxWalkSpeed;
    AccelerationDuration = PlayerMovementParameters->AccelerationDuration;
    AccelerationForce = PlayerMovementParameters->AccelerationForce;
    DeccelerationForce = PlayerMovementParameters->DeccelerationForce;
    
    DirectionChangeThreshold = PlayerMovementParameters->DirectionChangeThreshold;

    TurnDeccelerationForce = PlayerMovementParameters->TurnDeccelerationForce;
    TurnDeccelerationTime = PlayerMovementParameters->TurnDeccelerationTime;

    TurnReaccelerationForce = PlayerMovementParameters->TurnReaccelerationForce;
    TurnReaccelerationTime = PlayerMovementParameters->TurnReaccelerationTime;

    TurnAccelerationRetention = PlayerMovementParameters->TurnAccelerationRetention;

    Character->bUseControllerRotationYaw = false;

    // Reset des timers pour une entrée propre
    CurrentSpeed = Movement->Velocity.Size();
    CurrentTurnDeccelerationTime = TurnDeccelerationTime;
    CurrentTurnReaccelerationTime = TurnReaccelerationTime;

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
    FRotator ControlRot = Character->GetControlRotation();
    FRotator YawRotation(0.f, ControlRot.Yaw, 0.f);
    InputDirection = YawRotation.RotateVector(InputDirection);


    if (!InputDirection.IsNearlyZero() && !LastMoveDirection.IsNearlyZero())
    {
        float Angle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(RawInputDirection.GetSafeNormal(), LastMoveDirection)));
        
        if (Angle > DirectionChangeThreshold)
        {
            CurrentTurnDeccelerationTime = 0.f;
            CurrentTurnReaccelerationTime = 0.f;
            GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, 
                FString::Printf(TEXT("Changed direction")));
        }
    }
    

    if (InputMagnitude > 0.1)
    {
        if (CurrentTurnDeccelerationTime < TurnDeccelerationTime)
        {
            CurrentTurnDeccelerationTime += DeltaTime;
            CurrentSpeed = FMath::FInterpTo(CurrentSpeed, MaxWalkSpeed*TurnAccelerationRetention, DeltaTime, TurnDeccelerationForce);
        }
        else if (CurrentTurnReaccelerationTime < TurnReaccelerationTime)
        {
            CurrentTurnReaccelerationTime += DeltaTime;
            CurrentSpeed = FMath::FInterpTo(CurrentSpeed, MaxWalkSpeed, DeltaTime, TurnReaccelerationForce);
        }
        else
        {
            CurrentSpeed = FMath::FInterpTo(CurrentSpeed, MaxWalkSpeed, DeltaTime, AccelerationForce);
        }
        Movement->MaxWalkSpeed = CurrentSpeed;
        float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
        Character->AddMovementInput(InputDirection, ClampedMagnitude);
    }
    else
    {
        // Decceleration on no input
        CurrentSpeed = FMath::FInterpTo(CurrentSpeed, 0, DeltaTime, DeccelerationForce);
        Movement->MaxWalkSpeed = CurrentSpeed;

        float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
        Character->AddMovementInput(InputDirection, ClampedMagnitude);
    }

    LastMoveDirection = RawInputDirection.GetSafeNormal();

    if (Character->GetInputDodgeBuffer() and StateMachine->DodgeCooldown <= 0.0f)
    {
        StateMachine->ChangeState(PlayerCharacterStateID::Dodge);
        return;
    }
    if (CurrentSpeed < MaxWalkSpeed * 0.1f && InputMagnitude < 0.1f)
    {
        StateMachine->ChangeState(PlayerCharacterStateID::Idle);
        return;
    }
}
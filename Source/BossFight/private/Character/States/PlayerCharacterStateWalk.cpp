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

    Character->bUseControllerRotationYaw = false;

    // Reset des timers pour une entrée propre
    AccelerationTime = 0.f;
    CurrentSpeed = Movement->Velocity.Size();

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

    if (InputMagnitude > 0.1)
    {
        AccelerationTime += DeltaTime;
        CurrentSpeed = FMath::FInterpTo(CurrentSpeed, MaxWalkSpeed, DeltaTime, AccelerationForce);
        Movement->MaxWalkSpeed = CurrentSpeed;

        float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
        Character->AddMovementInput(InputDirection, ClampedMagnitude);
    }
    else
    {
        AccelerationTime -= DeltaTime;
        CurrentSpeed = FMath::FInterpTo(CurrentSpeed, 0, DeltaTime, DeccelerationForce);
        Movement->MaxWalkSpeed = CurrentSpeed;

        float ClampedMagnitude = FMath::Min(InputMagnitude, 1.f);
        Character->AddMovementInput(InputDirection, ClampedMagnitude);
    }
    
    if (CurrentSpeed < MaxWalkSpeed * 0.1f && InputMagnitude < 0.1f)
    {
        StateMachine->ChangeState(PlayerCharacterStateID::Idle);
        return;
    }


}
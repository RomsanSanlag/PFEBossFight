// Fill out your copyright notice in the Description page of Project Settings.


#include "BossFight/Public/Character/PlayerCharacter.h"


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
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
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



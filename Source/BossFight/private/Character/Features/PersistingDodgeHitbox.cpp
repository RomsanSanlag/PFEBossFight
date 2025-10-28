// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Features/PersistingDodgeHitbox.h"


// Sets default values
APersistingDodgeHitbox::APersistingDodgeHitbox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APersistingDodgeHitbox::BeginPlay()
{
	Super::BeginPlay();
}

void APersistingDodgeHitbox::SetDestroyTime(float time)
{
	FTimerHandle DelayHandle;
	GetWorld()->GetTimerManager().SetTimer(
		DelayHandle,
		[this]()
		{
			Destroy();
		},
		time,
		false
	);
}

void APersistingDodgeHitbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


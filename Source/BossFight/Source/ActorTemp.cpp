// Fill out your copyright notice in the Description page of Project Settings.

#include "BossFight/Header/ActorTemp.h"


// Sets default values
AActorTemp::AActorTemp()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AActorTemp::BeginPlay()
{
	Super::BeginPlay();
	printf("begin play\n");
}

// Called every frame
void AActorTemp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


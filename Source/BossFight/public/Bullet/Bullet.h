// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BOSSFIGHT_API ABullet : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector GetHomingDirection(FVector CurrentPos, FVector BasePos, FVector TargetPos, float HomingStrength,

	float HomingProgress);
	float ExpoOut(float t, float k);
	FVector GetBaseTrajectory(FVector Start, FVector End, float t, float ArcHeight);

	float t;
	float TravelTime;
	float ArcHeight;
	float HomingRampUp;
	float HomingStrength;

	FVector CurrentPos;
	FVector StartPos;

	ACharacter* BossCharacter;
};

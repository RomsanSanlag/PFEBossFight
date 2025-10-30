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
	/*FVector GetHomingDirection(FVector CurrentPos, FVector BasePos, FVector TargetPos, float HomingStrength, float HomingProgress);
	float ExpoOut(float t, float k);*/
	FVector GetBaseTrajectory();

	UPROPERTY(EditAnywhere)
	float t;
	UPROPERTY(EditAnywhere)
	float TravelTime;
	UPROPERTY(EditAnywhere)
	float ArcHeight;
	UPROPERTY(EditAnywhere)
	FVector StartPos;
	UPROPERTY(EditAnywhere)
	FVector EndPos;

	UPROPERTY(EditAnywhere)
	FVector2f XOffset;
	UPROPERTY(EditAnywhere)
	FVector2f YOffset;
	UPROPERTY(EditAnywhere)
	float SpawnRadius;

	FVector OffSetVector;

	UPROPERTY(EditAnywhere)
	UCurveFloat* OffsetEasing;

	/*ACharacter* BossCharacter;*/
};

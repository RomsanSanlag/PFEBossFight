// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacter.h"
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
	FVector ComputeArcBezier(const FVector& Start, const FVector& End, const FVector& Up, float Height, float T);
	float GetDistanceFromAim(FVector& Target);
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
	           const FHitResult& Hit);
	UPROPERTY(EditAnywhere)
	float time;
	UPROPERTY(EditAnywhere)
	float TravelTime;
	UPROPERTY(EditAnywhere)
	float ArcHeight;
	UPROPERTY(EditAnywhere)
	FVector StartPos;
	UPROPERTY(EditAnywhere)
	FVector EndPos;
	UPROPERTY(EditAnywhere)
	FVector BossLocation;
	UPROPERTY(EditAnywhere)
	FVector Origin;
	UPROPERTY(EditAnywhere)
	FRotator ViewRot;

	UPROPERTY(EditAnywhere)
	FVector2f XOffset;
	UPROPERTY(EditAnywhere)
	FVector2f YOffset;
	UPROPERTY(EditAnywhere)
	float SpawnRadius;

	FVector OffSetVector;

	ACharacter* BossCharacter;
	APlayerCharacter* PlayerCharacter;
	APlayerController* PC;

	UPROPERTY(EditAnywhere)
	UCurveFloat* OffsetEasing;
};

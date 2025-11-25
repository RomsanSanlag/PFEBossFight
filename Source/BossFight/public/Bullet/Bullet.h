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
	AActor* FindBestTarget();

public:
	// Called every frame
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnBulletDestroyed(AActor* OtherActor);

	virtual void Tick(float DeltaTime) override;
	FVector ComputeArcBezier(const FVector& Start, const FVector& End, float Height, float T);
	float GetDistanceFromAim(FVector& Target);
	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, 
					  AActor* OtherActor, 
					  UPrimitiveComponent* OtherComp, 
					  int32 OtherBodyIndex, 
					  bool bFromSweep, 
					  const FHitResult &SweepResult );

	
	UPROPERTY(EditAnywhere)
	float TravelTime;
	UPROPERTY(EditAnywhere)
	float ArcHeight;
	UPROPERTY(EditAnywhere)
	float ShootPower;
	UPROPERTY(EditAnywhere)
	float MaxAimDistanceToTriggerHoming;
	UPROPERTY(EditAnywhere)
	float MinHomingDistance = 300.f;
	UPROPERTY(EditAnywhere)
	UCurveFloat* CurveOverTime;
	UPROPERTY(EditAnywhere)
	UCurveFloat* SpeedOverTime;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> TargetableClasses;
	UPROPERTY(EditAnywhere)
	float HomingStrength = 1.0f;
	
	TArray<AActor*> FoundTargets;
	AActor* CurrentTarget;
	FVector StartPos;
	FVector EndPos;
	FVector BossLocation;
	FVector Origin;
	FRotator ViewRot;
	FVector InitialDirection;
	FVector ArcDirection;
	float time;

	ACharacter* BossCharacter;
	APlayerCharacter* PlayerCharacter;
	APlayerController* PC;
};

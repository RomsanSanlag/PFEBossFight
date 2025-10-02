// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerMovementParameters.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class BOSSFIGHT_API UPlayerMovementParameters : public UDataAsset
{
	GENERATED_BODY()
    
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement")
	float WalkSpeed = 600.f;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement")
	float JumpForce = 420.f;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement")
	float Acceleration = 2048.f;
};
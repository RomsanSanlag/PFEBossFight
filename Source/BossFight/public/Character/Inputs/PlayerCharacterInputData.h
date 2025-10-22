// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "Engine/DataAsset.h"
#include "PlayerCharacterInputData.generated.h"

/**
 * 
 */
UCLASS()
class BOSSFIGHT_API UPlayerCharacterInputData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InputActionMoveX;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InputActionMoveY;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InputActionLook;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BossFight/BossFightCharacter.h"
#include "Character/Inputs/PlayerCharacterInputData.h"
#include "Engine/DeveloperSettings.h"
#include "PlayerCharacterSettings.generated.h"


/**
 * 
 */
UCLASS(Config=Game, DefaultConfig, meta = (DisplayName = "Player Character Settings"))
class BOSSFIGHT_API UPlayerCharacterSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Config, EditAnywhere, Category = "Inputs")
	TSoftObjectPtr<UPlayerCharacterInputData> InputData;

	UPROPERTY(Config, EditAnywhere, Category = "Inputs")
	TSoftObjectPtr<UInputMappingContext> InputMappingContext;
};

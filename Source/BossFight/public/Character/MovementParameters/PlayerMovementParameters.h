// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerMovementParameters.generated.h"

/**
 * Data Asset contenant tous les paramètres de mouvement du joueur.
 * Permet de créer différents presets (Normal, Fast, Heavy, etc.) et de les tweaker facilement.
 */
UCLASS(BlueprintType)
class BOSSFIGHT_API UPlayerMovementParameters : public UDataAsset
{
    GENERATED_BODY()

public:
    // Constructor pour initialiser les valeurs par défaut
    UPlayerMovementParameters()
    {
        MaxWalkSpeed = 200.0f;
        AccelerationDuration = 1.0f;
        AccelerationForce = 5.0f;
        DeccelerationForce = 5.0f;
    }
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float MaxWalkSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float AccelerationDuration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float DeccelerationForce;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float AccelerationForce;

    
};
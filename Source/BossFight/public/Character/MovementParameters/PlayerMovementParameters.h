// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerMovementParameters.generated.h"

/**
 * Data Asset contenant tous les paramètres de mouvement du joueur.
 * Permet de créer différents presets (Normal, Fast, Heavy, etc.) et de les tweaker facilement.
 */


// Enum pour les types de courbes d'accélération

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
        DirectionChangeThreshold = 5.0f;
        
        TurnDeccelerationForce = 5.0f;
        TurnDeccelerationTime = 5.0f;
        TurnReaccelerationForce = 5.0f;
        TurnReaccelerationTime = 5.0f;
        TurnAccelerationRetention = 50.0f;
        
        DashDuration = 1.0f;
        DashDistance = 600.0f;
        DodgeCooldown = 5.0f;
        DashEasing;
        
    }
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float MaxWalkSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float AccelerationDuration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float DeccelerationForce;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed")
    float AccelerationForce;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn")
    float DirectionChangeThreshold;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn")
    float TurnDeccelerationForce;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn")
    float TurnDeccelerationTime;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn")
    float TurnReaccelerationForce;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn")
    float TurnReaccelerationTime;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Turn", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float TurnAccelerationRetention = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Dodge")
    float DashDuration;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Dodge")
    float DashDistance;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Dodge")
    float DodgeCooldown;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Dodge")
    UCurveFloat* DashEasing;

};
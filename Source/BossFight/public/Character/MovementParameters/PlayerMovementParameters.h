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
UENUM(BlueprintType)
enum class EAccelerationCurve : uint8
{
    Linear          UMETA(DisplayName = "Linear"),
    EaseInQuad      UMETA(DisplayName = "Ease In (Quadratic)"),
    EaseOutQuad     UMETA(DisplayName = "Ease Out (Quadratic)"),
    EaseInOutCubic  UMETA(DisplayName = "Ease In-Out (Cubic)")
};
UCLASS(BlueprintType)
class BOSSFIGHT_API UPlayerMovementParameters : public UDataAsset
{
    GENERATED_BODY()

public:
    // Constructor pour initialiser les valeurs par défaut
    UPlayerMovementParameters()
    {
        WalkSpeed = 400.f;
        
        WalkAcceleration = 1500.f;
        WalkBrakingDeceleration = 2048.f;
        WalkGroundFriction = 8.f;
        
        AccelerationCurveType = EAccelerationCurve::EaseOutQuad;
        AccelerationDuration = 0.3f;
        
        DirectionChangeThreshold = 90.f;
        DirectionChangeDuration = 0.4f;
        DirectionChangeDecelerationDuration = 0.15f;
        TurnDecelerationFrictionMultiplier = 2.5f;
        TurnVelocityRetention = 0.5f;
    }

    // ========================================
    // VITESSE & FORCES
    // ========================================
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Movement|Speed", 
        meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "100.0", UIMax = "1000.0",
        ToolTip = "Vitesse de marche maximale du personnage (en unités/seconde). Valeurs typiques: 300-600"))
    float WalkSpeed;

    // ========================================
    // ACCÉLÉRATION & FREINAGE
    // ========================================
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Acceleration", 
        meta = (ClampMin = "0.0", UIMin = "500.0", UIMax = "5000.0",
        ToolTip = "Vitesse d'accélération lors du démarrage. Plus c'est haut, plus le personnage atteint sa vitesse max rapidement. Valeurs typiques: 1000-2500"))
    float WalkAcceleration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Acceleration", 
        meta = (ClampMin = "0.0", UIMin = "500.0", UIMax = "5000.0",
        ToolTip = "Vitesse de décélération quand le joueur arrête de bouger. Plus c'est haut, plus le freinage est rapide. Valeurs typiques: 1500-3000"))
    float WalkBrakingDeceleration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Acceleration", 
        meta = (ClampMin = "0.0", ClampMax = "20.0", UIMin = "1.0", UIMax = "15.0",
        ToolTip = "Friction au sol. Contrôle l'inertie du personnage. Plus c'est haut, moins il glisse. Valeurs typiques: 6-10"))
    float WalkGroundFriction;

    // ========================================
    // COURBE D'ACCÉLÉRATION
    // ========================================
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Acceleration Curve",
        meta = (ToolTip = "Type de courbe pour l'accélération progressive.\n• Linear: Vitesse constante\n• Ease In: Démarrage lent puis rapide\n• Ease Out: Démarrage rapide puis ralentissement (recommandé)\n• Ease In-Out: Smooth au début et à la fin"))
    EAccelerationCurve AccelerationCurveType;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Acceleration Curve", 
        meta = (ClampMin = "0.05", ClampMax = "3.0", UIMin = "0.1", UIMax = "1.0",
        ToolTip = "Durée (en secondes) pour atteindre la vitesse maximale depuis l'arrêt. Plus c'est court, plus le mouvement est nerveux. Valeurs typiques: 0.2-0.5"))
    float AccelerationDuration;

    // ========================================
    // CHANGEMENT DE DIRECTION
    // ========================================
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Direction Change", 
        meta = (ClampMin = "0.0", ClampMax = "180.0", UIMin = "0", UIMax = "300",
        ToolTip = "Angle minimum (en degrés) pour déclencher un changement de direction. 90° = demi-tour, 180° = virage complet. Valeurs typiques: 70-110"))
    float DirectionChangeThreshold;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Direction Change", 
        meta = (ClampMin = "0", ClampMax = "2.0", UIMin = "0", UIMax = "3",
        ToolTip = "Durée TOTALE du changement de direction (décélération + réaccélération). Plus c'est long, plus le virage est réaliste. Valeurs typiques: 0.3-0.6"))
    float DirectionChangeDuration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Direction Change", 
        meta = (ClampMin = "0", ClampMax = "1.5", UIMin = "0", UIMax = "1",
        ToolTip = "Durée de la phase de DÉCÉLÉRATION uniquement. Le reste du temps sera utilisé pour la réaccélération.\nExemple: Si Duration=0.4s et Deceleration=0.15s → Réaccélération=0.25s. Valeurs typiques: 0.1-0.2"))
    float DirectionChangeDecelerationDuration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Direction Change", 
        meta = (ClampMin = "0", ClampMax = "10.0", UIMin = "0", UIMax = "10",
        ToolTip = "Multiplicateur de friction pendant le freinage du virage. Plus c'est haut, plus le personnage freine fort dans les virages. Valeurs typiques: 2.0-3.5"))
    float TurnDecelerationFrictionMultiplier;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Movement|Direction Change",
        meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0", UIMax = "1.0",
        ToolTip = "Facteur de conservation de la vitesse lors d'un changement de direction. 1.0 = aucune perte de vitesse, 0.0 = arrêt complet. Valeurs typiques: 0.5-0.8"))
    float TurnVelocityRetention;



};
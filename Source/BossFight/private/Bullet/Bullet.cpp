// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet/Bullet.h"

#include "Character/PlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	UStaticMeshComponent* CollisionComponent = FindComponentByClass<UStaticMeshComponent>();
	if (CollisionComponent)
	{
		CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ABullet::BeginOverlap);
	}
	
	PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerCharacter || !PC) return;

	PC->GetPlayerViewPoint(Origin, ViewRot);
	StartPos = GetActorLocation();
	
	// Trouver la cible la plus visée
	CurrentTarget = FindBestTarget();
	
	if (CurrentTarget)
	{
		BossLocation = CurrentTarget->GetActorLocation();
	}

	// Calcul de la position finale pour le tir
	FVector StartTrace = Origin;
	FVector EndTrace = Origin + ViewRot.Vector() * ShootPower;

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(PlayerCharacter);

	if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, Params))
	{
		EndPos = Hit.ImpactPoint + ViewRot.Vector();
	}
	else
	{
		EndPos = EndTrace;
	}
	
	FVector ShootDirection = (EndPos - StartPos).GetSafeNormal();
	
	FVector WorldUp = GetActorRotation().RotateVector(FVector::UpVector);
    
	// Si on tire presque verticalement, utiliser le forward du joueur
	if (FMath::Abs(FVector::DotProduct(ShootDirection, WorldUp)) > 0.95f)
	{
		WorldUp = ViewRot.Vector().RightVector;
	}
    
	// Créer un vecteur perpendiculaire à la direction de tir
	ArcDirection = FVector::CrossProduct(ShootDirection, WorldUp).GetSafeNormal();
	ArcDirection = FVector::CrossProduct(ArcDirection, ShootDirection).GetSafeNormal();
}

AActor* ABullet::FindBestTarget()
{
	if (TargetableClasses.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Aucune classe cible définie"));
		return nullptr;
	}

	// Collecte toutes les instances des classes targetables
	FoundTargets.Empty();
	
	for (TSubclassOf<AActor> TargetClass : TargetableClasses)
	{
		if (!TargetClass) continue;

		TArray<AActor*> ActorsOfClass;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), TargetClass, ActorsOfClass);
		
		FoundTargets.Append(ActorsOfClass);
	}

	if (FoundTargets.Num() == 0)
	{
		return nullptr;
	}

	// Trouve la cible la plus proche du curseur
	AActor* BestTarget = nullptr;
	float SmallestAimDistance = FLT_MAX;

	for (AActor* Target : FoundTargets)
	{
		if (!Target || !Target->IsValidLowLevel()) continue;

		FVector TargetLocation = Target->GetActorLocation();
		float AimDistance = GetDistanceFromAim(TargetLocation);

		UE_LOG(LogTemp, Verbose, TEXT("Cible %s : distance aim = %f"), 
			*Target->GetName(), 
			AimDistance);

		if (AimDistance < SmallestAimDistance)
		{
			SmallestAimDistance = AimDistance;
			BestTarget = Target;
		}
	}

	return BestTarget;
}

void ABullet::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerCharacter || !CurrentTarget) return;

    BossLocation = CurrentTarget->GetActorLocation();
    
    // --- Application de SpeedOverTime ---
    float SpeedMultiplier = 1.f;
    if (SpeedOverTime)
    {
        float CurveValue = SpeedOverTime->GetFloatValue(time);
        SpeedMultiplier = FMath::Max(0.01f, CurveValue);
    }

    time += DeltaTime * SpeedMultiplier;

    float T = time / TravelTime;
    float TClamped = FMath::Clamp(T, 0.f, 1.f);

    float DistanceToTarget = FVector::Dist(GetActorLocation(), BossLocation);

    // NOUVEAU : Destruction basée uniquement sur la distance minimale
    const float MinDestructionDistance = 300.f; // Distance en dessous de laquelle on considère avoir touché
    
    // Destruction si on est très proche OU si on est trop loin après un certain temps
    if (T >= 1.f)
    {
        // Si on est très proche, on considère qu'on a touché
        if (DistanceToTarget < MinDestructionDistance)
        {
            // Ne pas détruire ici, laisser le BeginOverlap gérer ça
            // Ou détruire si pas de collision après être passé à côté
        }
        
        // Destruction seulement si on est VRAIMENT trop loin ET qu'on s'éloigne
        if (DistanceToTarget > ShootPower * 2.f) // Augmenté de 1.5 à 2.0
        {
            FVector DirectionToTarget = (BossLocation - GetActorLocation()).GetSafeNormal();
            FVector CurrentDirection = GetActorForwardVector();
            float DotToTarget = FVector::DotProduct(CurrentDirection, DirectionToTarget);
            
            // Seulement si on part vraiment dans la mauvaise direction
            if (DotToTarget < 0.2f) // Réduit de 0.5 à 0.2
            {
                OnBulletDestroyed(this);
                Destroy();
                return;
            }
        }
    }
    
    // Sécurité : destruction absolue après un temps vraiment long
    if (time > TravelTime * 3.f) // Augmenté de 2.0 à 3.0
    {
        OnBulletDestroyed(this);
        Destroy();
        return;
    }

    // Distance de visée
    float AimDist = GetDistanceFromAim(BossLocation);

    float PlayerToBossDist = FVector::Dist(PlayerCharacter->GetActorLocation(), BossLocation);
    float CurveAttenuation = FMath::Clamp(PlayerToBossDist / MaxAimDistanceToTriggerHoming, 0.f, 1.f);	
    
    float HomingFactor = FMath::Clamp(1.0f - (AimDist / MaxAimDistanceToTriggerHoming), 0.f, 1.f);
    float HomingAttenuation = FMath::Clamp((PlayerToBossDist - MinHomingDistance) / MaxAimDistanceToTriggerHoming, 0.f, 1.f);
	
    float TimingFactor = T < 1.f ? FMath::Pow(TClamped, 0.5f) : 1.f; // Garde le homing à 100% après T=1
    float TimedHomingFactor = HomingFactor * HomingStrength * HomingAttenuation * TimingFactor;

    FVector FinalTarget = FMath::Lerp(EndPos, BossLocation, TimedHomingFactor);

    // --- Application de CurveOverTime sur l'apex ---
    float DynamicArcHeight = ArcHeight;

    if (CurveOverTime)
    {
        float CurveValue = CurveOverTime->GetFloatValue(TClamped);
        DynamicArcHeight = ArcHeight * CurveValue * CurveAttenuation;
    }

    FVector NewPos;
    if (T > 1.f)
    {
        // NOUVEAU : Continue le homing même après T = 1.0
        FVector LastCurvePos = ComputeArcBezier(StartPos, FinalTarget, DynamicArcHeight, 1.f);
        
        // Direction vers la cible avec homing
        FVector ToTarget = (BossLocation - LastCurvePos).GetSafeNormal();
        
        // Direction de la courbe
        FVector AlmostLastPos = ComputeArcBezier(StartPos, FinalTarget, DynamicArcHeight, 0.99f);
        FVector CurveDirection = (LastCurvePos - AlmostLastPos).GetSafeNormal();
        
        // Mélange entre direction de la courbe et direction vers la cible
        float HomingBlend = FMath::Clamp(TimedHomingFactor, 0.f, 0.8f); // Max 80% de homing
        FVector FinalDirection = FMath::Lerp(CurveDirection, ToTarget, HomingBlend).GetSafeNormal();
        
        float AverageSpeed = FVector::Dist(StartPos, LastCurvePos) / TravelTime;
        float ExtraTime = time - TravelTime;
        NewPos = LastCurvePos + FinalDirection * AverageSpeed * ExtraTime;
    }
    else
    {
        NewPos = ComputeArcBezier(StartPos, FinalTarget, DynamicArcHeight, TClamped);
    }

    FVector CurrentPos = GetActorLocation();
    FVector MoveDir = (NewPos - CurrentPos).GetSafeNormal();

    if (!MoveDir.IsNearlyZero())
    {
        SetActorRotation(MoveDir.Rotation());
    }

    SetActorLocation(NewPos);
}
FVector ABullet::ComputeArcBezier(const FVector& Start, const FVector& End, float Height, float T)
{
	T = FMath::Clamp(T, 0.f, 1.f);

	FVector Mid = (Start + End) * 0.5f;
	FVector Control = Mid + ArcDirection * Height; // déjà dynamique grâce à CurveOverTime

	float U = 1.f - T;
	return U * U * Start + 2.f * U * T * Control + T * T * End;
}

float ABullet::GetDistanceFromAim(FVector& Target)
{
	FVector Direction = ViewRot.Vector();
	
	/*FVector BossLocation = BossCharacter->GetActorLocation();*/
	FVector ToBoss = Target - Origin;

	// Projection scalaire du vecteur vers le boss sur la direction de visée
	float t = FVector::DotProduct(ToBoss, Direction);

	// Si le boss est derrière le joueur, on clamp à 0
	if (t < 0.0f)
	{
		t = 0.0f;
	}

	// Point le plus proche sur la ligne de visée
	FVector ClosestPoint = Origin + Direction * t;

	// Distance perpendiculaire (écart latéral)
	float DistPerpendicular = FVector::Dist(Target, ClosestPoint);

	// Distance le long du rayon (dans la direction de visée)
	float DistAlong = t;

	return DistPerpendicular;
}

void ABullet::BeginOverlap(UPrimitiveComponent* OverlappedComponent, 
					  AActor* OtherActor, 
					  UPrimitiveComponent* OtherComp, 
					  int32 OtherBodyIndex, 
					  bool bFromSweep, 
					  const FHitResult &SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		OnBulletDestroyed(OtherActor);
		Destroy();
	}
}
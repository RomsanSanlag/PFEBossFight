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
	
	// Récupération du player
	PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerCharacter || !PC) return;

	FVector PlayerLoc = PlayerCharacter->GetActorLocation();
	FRotator ControlRot = PC->GetControlRotation();
	FVector LookDir = ControlRot.Vector();

	UClass* BossBPClass = StaticLoadClass(ACharacter::StaticClass(), nullptr, TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/BP_Boss/BP_BossDev.BP_BossDev_C'"));
	if (BossBPClass)
	{
		TArray<AActor*> FoundBosses;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), BossBPClass, FoundBosses);

		if (FoundBosses.Num() > 0)
		{
			BossCharacter = Cast<ACharacter>(FoundBosses[0]);
			UE_LOG(LogTemp, Warning, TEXT("Boss trouvé : %s"), *BossCharacter->GetName());
		}
	}
	
	PC->GetPlayerViewPoint(Origin, ViewRot);

	StartPos = GetActorLocation();
	
	float PlayerToBossDist = FVector::Dist(PlayerLoc, BossLocation);

	float Factor = 1.f - FMath::Clamp(PlayerToBossDist / MaxAimDistanceToTriggerHoming, 0.f, 1.f);

	FVector AimEndPos = StartPos + ViewRot.Vector() * ShootPower;
	EndPos = FMath::Lerp(AimEndPos, BossLocation, Factor);
	//EndPos = StartPos + ViewRot.Vector() * ShootPower;


	PC->GetPlayerViewPoint(Origin, ViewRot);

	BossLocation = BossCharacter->GetActorLocation();
	GEngine->AddOnScreenDebugMessage(
		-1,
		3.f,
		FColor::Magenta,
		FString::Printf(TEXT("Aim distance from boss %f"), GetDistanceFromAim(BossLocation))
	);

	Up = GetActorRotation().RotateVector(FVector::UpVector);
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!PlayerCharacter || !BossCharacter) return;

	// --- Application de SpeedOverTime ---
	float SpeedMultiplier = 1.f;
	if (SpeedOverTime)
	{
		float CurveValue = SpeedOverTime->GetFloatValue(time);
		SpeedMultiplier = FMath::Max(0.01f, CurveValue); // sécurité
	}

	time += DeltaTime * SpeedMultiplier;

	// Time normalisé
	float T = FMath::Clamp(time / TravelTime, 0.f, 1.f);

	if (T >= 1.f)
	{
		OnBulletDestroyed(this);
		Destroy();
		return;
	}

	// Distance de visée
	float AimDist = GetDistanceFromAim(BossLocation);
	
	float HomingFactor = FMath::Clamp(1.0f - (AimDist / MaxAimDistanceToTriggerHoming), 0.f, 1.f);
	float TimedHomingFactor = FMath::Clamp(HomingFactor * T, 0.f, HomingFactor);

	FVector FinalTarget = FMath::Lerp(EndPos, BossLocation, TimedHomingFactor);

	// --- Application de CurveOverTime sur l'apex ---
	float DynamicArcHeight = ArcHeight;

	if (CurveOverTime)
	{
		float CurveValue = CurveOverTime->GetFloatValue(T);  // entre 0 et 1 typiquement
		DynamicArcHeight = ArcHeight * CurveValue;
	}

	// Bézier avec arc dynamique
	FVector NewPos = ComputeArcBezier(StartPos, FinalTarget, DynamicArcHeight, T);

	// Rotation dans la direction du mouvement
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
	FVector Control = Mid + Up * Height; // déjà dynamique grâce à CurveOverTime

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
					  const FHitResult &SweepResult )
{
	if (!OtherActor || OtherActor == this || !BossCharacter) return;
	OnBulletDestroyed(OtherActor);
	Destroy();
}

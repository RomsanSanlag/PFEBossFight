// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet/Bullet.h"

#include "Character/PlayerCharacter.h"
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
	
	// Récupération du player
	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerCharacter || !PC) return;

	FVector PlayerLoc = PlayerCharacter->GetActorLocation();
	FRotator ControlRot = PC->GetControlRotation();
	FVector LookDir = ControlRot.Vector();

	// Génère un angle aléatoire dans le plan X-Y
	float RandomAngle = FMath::RandRange(0.f, 2 * PI);

	// Crée un vecteur de décalage dans un cercle autour du joueur
	FVector2D CircleOffset = FVector2D(FMath::Cos(RandomAngle), FMath::Sin(RandomAngle)) * SpawnRadius;

	// Définit la position de départ de la balle
	StartPos = PlayerLoc + FVector(CircleOffset.X, CircleOffset.Y, 0.f);

	// Calcule un vecteur d'offset pour créer une trajectoire arquée
	OffSetVector = FVector(CircleOffset.X, CircleOffset.Y, 0.f).GetSafeNormal();

	// Position finale (par exemple, tout droit devant la caméra)
	EndPos = StartPos + LookDir * 1000.f;
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	t += DeltaTime / TravelTime;
	

	FVector NewLocation = GetBaseTrajectory();
	SetActorLocation(NewLocation);

}

float ExpoOut(float t, float k = 8.f)
{
	return 1.f - FMath::Pow(2.f, -k * t);
}

FVector ABullet::GetBaseTrajectory()
{
	FVector linearLerp = FMath::Lerp(StartPos, EndPos, t);
	FVector Offset = OffsetEasing->GetFloatValue(t) * (OffSetVector * ArcHeight);
	FVector finalPose = linearLerp + Offset;
	return finalPose;
}
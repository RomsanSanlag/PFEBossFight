// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet/Bullet.h"

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
	
	UClass* BossBPClass = StaticLoadClass(ACharacter::StaticClass(), nullptr, TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/BP_Boss/BP_BossCharacter.BP_BossCharacter'"));
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
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	t += DeltaTime / TravelTime;
	
	FVector BasePos = GetBaseTrajectory(StartPos, BossCharacter->GetActorLocation(), t, ArcHeight);
	float HomingProgress = FMath::Clamp(t * HomingRampUp, 0.f, 1.f);

	FVector Dir = GetHomingDirection(CurrentPos, BasePos, BossCharacter->GetActorLocation(),
									 HomingStrength, HomingProgress);

	float Speed = (End - Start).Size() / TravelTime;
	CurrentPos += Dir * Speed * DeltaTime;

	SetActorLocation(CurrentPos);

}

FVector ABullet::GetHomingDirection(FVector CurrentPos, FVector BasePos, FVector TargetPos, float HomingStrength, float HomingProgress)
{
	FVector BaseDir = (BasePos - CurrentPos).GetSafeNormal();
	FVector ToTarget = (TargetPos - CurrentPos).GetSafeNormal();
	FVector NewDir = FMath::Lerp(BaseDir, ToTarget, HomingStrength * HomingProgress);
	return NewDir.GetSafeNormal();
}

float ABullet::ExpoOut(float t, float k = 8.f)
{
	return 1.f - FMath::Pow(2.f, -k * t);
}

FVector ABullet::GetBaseTrajectory(FVector Start, FVector End, float t, float ArcHeight)
{
	float expoT = ExpoOut(t);
	FVector LerpPos = FMath::Lerp(Start, End, expoT);
	float Arc = ArcHeight * (1 - FMath::Pow(2 * t - 1, 2));
	LerpPos.Z += Arc;
	return LerpPos;
}


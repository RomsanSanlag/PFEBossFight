// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BossFight/private/Character/PlayerCharacterState.h"
#include "PlayerCharacterStateIdle.generated.h"


UCLASS(ClassGroup=(PlayerCharacterState), meta=(BlueprintSpawnableComponent))
class BOSSFIGHT_API UPlayerCharacterStateIdle : public UPlayerCharacterState
{
	GENERATED_BODY()

public:
	virtual PlayerCharacterStateID GetStateID() override;

	virtual void StateEnter(PlayerCharacterStateID PlayerStateID) override;

	virtual void StateExit(PlayerCharacterStateID PlayerStateID) override;

	virtual void StateTick(float DeltaTime) override;
};

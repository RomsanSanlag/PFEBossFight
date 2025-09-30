// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ThirdPersonTestCPP/private/Character/PlayerCharacterState.h"
#include "PlayerCharacterStateIdle.generated.h"


UCLASS(ClassGroup=(PlayerCharacterState), meta=(BlueprintSpawnableComponent))
class THIRDPERSONTESTCPP_API UPlayerCharacterStateIdle : public UPlayerCharacterState
{
	GENERATED_BODY()

public:
	virtual PlayerCharacterStateID GetStateID() override;
};

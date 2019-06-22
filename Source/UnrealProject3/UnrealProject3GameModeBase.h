// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealProject3GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPROJECT3_API AUnrealProject3GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
};

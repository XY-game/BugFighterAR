// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameTypes.generated.h"

UENUM()
namespace EGameKey
{
	enum Type
	{
		Tap,
		Hold,
		Swipe,
		SwipeTwoPoints,
		Pinch,
	};
}

UENUM()
namespace EGameplayState
{
	enum Type
	{
		Waiting,
		Playing,
		Finished,
	};
}

UENUM()
namespace EHeroType
{
	enum Type
	{
		ACT,
		RPG,
		MOBA,
	};
}

/**
 * 
 */
UCLASS()
class ROBOTBURST_API UGameTypes : public UObject
{
	GENERATED_BODY()
	
	
	
	
};

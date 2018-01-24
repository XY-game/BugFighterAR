// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameTypes.generated.h"

UENUM()
//点击状态
namespace ECharaterTeam
{
	enum Type
	{
		Team_1,
		Team_2,
	};
}

UENUM()
//点击状态
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
//游戏流程状态
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
//英雄的游戏类型
namespace EHeroType
{
	enum Type
	{
		ACT,
		RPG,
		MOBA,
	};
}

UENUM()
//英雄操作状态
namespace ECharaterActionStateType
{
	enum Type
	{
		Idle,
		Run,
		Attack,
		Skill,
		Jump,
		Die,
		Roll,
		Hurt,
	};
}

UENUM()
//英雄受伤状态
namespace ECharaterBeDamageType
{
	enum Type
	{
		NORMAL,
		HURT,
		DIE,
	};
}


/**
 * 
 */
UCLASS()
class ROBOTBURST_API UGameTypes : public UObject
{
	GENERATED_BODY()

public:
	static bool IsDebugMode;
};

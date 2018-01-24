// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameTypes.generated.h"

UENUM()
//���״̬
namespace ECharaterTeam
{
	enum Type
	{
		Team_1,
		Team_2,
	};
}

UENUM()
//���״̬
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
//��Ϸ����״̬
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
//Ӣ�۵���Ϸ����
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
//Ӣ�۲���״̬
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
//Ӣ������״̬
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

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameLogic/SingleGameLogicActor.h"
#include "BaseGameState.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API ABaseGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
		class ASingleGameLogicActor* GameLogic;
	
	
};

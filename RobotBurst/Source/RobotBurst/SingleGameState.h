// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "BaseGameState.h"
#include "SingleGameState.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API ASingleGameState : public ABaseGameState
{
	GENERATED_BODY()
	
public:

	ASingleGameState(const FObjectInitializer& ObjectInitializer);

	//UPROPERTY(BlueprintReadWrite)
	//class ASingleGameLogicActor* GameLogic;

	void InitGame();
	
protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;
};

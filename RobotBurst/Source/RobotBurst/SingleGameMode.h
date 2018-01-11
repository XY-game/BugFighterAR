// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BaseGameMode.h"
#include "SingleGameMode.generated.h"

class ASingleGameLogicActor;

/**
 * 
 */
UCLASS()
class ROBOTBURST_API ASingleGameMode : public ABaseGameMode
{
	GENERATED_BODY()
	
public:
	ASingleGameMode();
	
	/** Initialize the GameState actor. */
	virtual void InitGameState() override;
	
	UPROPERTY()
		TSubclassOf<ASingleGameLogicActor> GameLogic;

	void CreatGameInitWidget();
};

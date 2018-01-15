// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "StateMachine/PlayerAction/PlayerActionFSMMachine.h"
#include "HeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API AHeroCharacter : public ABaseCharacter
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AHeroCharacter();
	
	virtual void Tick(float DeltaTime) override;

	//ÐÐ¶¯×´Ì¬»ú
	PlayerActionFSMMachine* ActionFSM;
};

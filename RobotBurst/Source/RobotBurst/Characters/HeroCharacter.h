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
public:
	AHeroCharacter();
	
	//ÐÐ¶¯×´Ì¬»ú
	PlayerActionFSMMachine* ActionFSM;
};

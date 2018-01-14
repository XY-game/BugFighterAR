// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/PlayerActionBaseState.h"
#include "Characters/ACTHeroCharacter.h"
/**
 * 
 */
class ROBOTBURST_API ACTPlayerActionBaseState : public PlayerActionBaseState
{
public:
	ACTPlayerActionBaseState();

	class AACTHeroCharacter* ACTCharater;
};

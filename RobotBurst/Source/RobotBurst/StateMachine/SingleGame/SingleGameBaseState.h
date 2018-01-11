// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StateMachine/FSMState.h"
#include "GameLogic/SingleGameLogicActor.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROBOTBURST_API SingleGameBaseState : public FSMState
{
public:
	SingleGameBaseState();

	class ASingleGameLogicActor* GameLogic;
};

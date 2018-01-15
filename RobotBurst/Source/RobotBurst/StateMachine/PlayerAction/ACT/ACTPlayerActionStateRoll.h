// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionBaseState.h"
/**
 * 
 */
class ROBOTBURST_API ACTPlayerActionStateRoll : public ACTPlayerActionBaseState
{
public:
	ACTPlayerActionStateRoll();

	virtual void EnterState() override;

	virtual void TickState() override;

	virtual void ExitState() override;

};

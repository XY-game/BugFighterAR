// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionBaseState.h"
/**
 * 
 */
class ROBOTBURST_API ACTPlayerActionStateJump : public ACTPlayerActionBaseState
{
public:
	ACTPlayerActionStateJump();

	virtual void Move(FVector Movement) override;

	virtual void Jump() override;

	virtual void EndJump() override;

	virtual void TickState() override;
};

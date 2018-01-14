// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionBaseState.h"
/**
 * 
 */
class ROBOTBURST_API ACTPlayerActionStateRun : public ACTPlayerActionBaseState
{
public:
	ACTPlayerActionStateRun();

	virtual void Move(FVector Movement) override;

	virtual void Attack() override;

	virtual void Jump() override;

	virtual void EndJump() override;

	virtual void Skill(int id) override;

	virtual void Roll() override;

	virtual void TickState() override;
};

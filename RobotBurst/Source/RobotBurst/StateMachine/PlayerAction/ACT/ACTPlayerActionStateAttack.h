// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionBaseState.h"
/**
 * 
 */
class ROBOTBURST_API ACTPlayerActionStateAttack : public ACTPlayerActionBaseState
{
public:
	ACTPlayerActionStateAttack();

	virtual void Attack() override;

	virtual void Move(FVector Movement) override;
};

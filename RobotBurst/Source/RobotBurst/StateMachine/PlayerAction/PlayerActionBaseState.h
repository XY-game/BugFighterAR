// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/FSMState.h"

/**
 * 
 */
class ROBOTBURST_API PlayerActionBaseState : public FSMState
{
public:
	PlayerActionBaseState();

	virtual void Move(FVector Movement);

	virtual void Attack();

	virtual void Jump();

	virtual void EndJump();

	virtual void Skill(int id);

	virtual void Roll();
};

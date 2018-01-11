// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ROBOTBURST_API FSMState
{
public:
	FSMState();

	virtual void EnterState();

	virtual void TickState();

	virtual void ExitState();
};

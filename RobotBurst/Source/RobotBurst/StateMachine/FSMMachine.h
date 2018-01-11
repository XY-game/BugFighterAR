// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"FSMState.h"
#include "CoreMinimal.h"
#include "GameTypes.h"

/**
 * 
 */
class ROBOTBURST_API FSMMachine
{
public:
	FSMMachine();

	EGameplayState::Type CurStateKey;
	FSMState* CurState;

	TMap<EGameplayState::Type, FSMState*> States;

	void InitMachine(EGameplayState::Type StateKey);

	void RegisterState(EGameplayState::Type StateKey,FSMState* State);

	void UnRegisterState(EGameplayState::Type StateKey);

	void TickMachine();

	void ChangeState(EGameplayState::Type StateKey);
};

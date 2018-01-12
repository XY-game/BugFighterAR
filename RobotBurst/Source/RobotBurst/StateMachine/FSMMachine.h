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
	int CurStateKey;
	/*EGameplayState::Type CurStateKey;*/
	FSMState* CurState;

	TMap<int, FSMState*> States;

	void InitMachine(int StateKey);

	void RegisterState(int StateKey,FSMState* State);

	void UnRegisterState(int StateKey);

	void TickMachine();

	void ChangeState(int StateKey);
};

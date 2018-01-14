// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine/PlayerAction/PlayerActionBaseState.h"
/**
 * 
 */
class ROBOTBURST_API PlayerActionFSMMachine
{
public:
	PlayerActionFSMMachine();
	~PlayerActionFSMMachine();

	int CurStateKey;
	/*EGameplayState::Type CurStateKey;*/
	PlayerActionBaseState* CurState;

	TMap<int, PlayerActionBaseState*> States;

	void InitMachine(int StateKey);

	void RegisterState(int StateKey, PlayerActionBaseState* State);

	void UnRegisterState(int StateKey);

	void TickMachine();

	void ChangeState(int StateKey);
};

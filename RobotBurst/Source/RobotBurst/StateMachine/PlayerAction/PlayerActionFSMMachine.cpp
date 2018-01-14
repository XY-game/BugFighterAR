// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerActionFSMMachine.h"

PlayerActionFSMMachine::PlayerActionFSMMachine()
{
}

PlayerActionFSMMachine::~PlayerActionFSMMachine()
{
}

void PlayerActionFSMMachine::InitMachine(int StateKey)
{
	if (States.Contains(StateKey)) {
		CurState = States[StateKey];
		CurStateKey = StateKey;
		CurState->EnterState();
	}
}

void PlayerActionFSMMachine::RegisterState(int StateKey, PlayerActionBaseState * State)
{
	if (!States.Contains(StateKey)) {
		States.Add(StateKey, State);
	}
}

void PlayerActionFSMMachine::UnRegisterState(int StateKey)
{
	if (States.Contains(StateKey)) {
		States.Remove(StateKey);
	}
}

void PlayerActionFSMMachine::TickMachine()
{
	CurState->TickState();
}

void PlayerActionFSMMachine::ChangeState(int StateKey)
{
	if (States.Contains(StateKey)) {
		CurState->ExitState();
		CurState = States[StateKey];
		CurStateKey = StateKey;
		CurState->EnterState();
	}
}

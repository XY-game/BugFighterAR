// Fill out your copyright notice in the Description page of Project Settings.

#include "FSMMachine.h"

FSMMachine::FSMMachine()
{
}

void FSMMachine::InitMachine(int StateKey)
{
	if (States.Contains(StateKey)) {
		CurState = States[StateKey];
		CurStateKey = StateKey;
		CurState->EnterState();
	}
}

void FSMMachine::RegisterState(int StateKey, FSMState* State)
{
	if (!States.Contains(StateKey)) {
		States.Add(StateKey, State);
	}
}

void FSMMachine::UnRegisterState(int StateKey)
{
	if (States.Contains(StateKey)) {
		States.Remove(StateKey);
	}
}

void FSMMachine::TickMachine()
{
	CurState->TickState();
}

void FSMMachine::ChangeState(int StateKey)
{
	if (States.Contains(StateKey)) {
		CurState->ExitState();
		CurState = States[StateKey];
		CurStateKey = StateKey;
		CurState->EnterState();
	}
}

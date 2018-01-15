// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionStateRoll.h"

ACTPlayerActionStateRoll::ACTPlayerActionStateRoll()
{
}

void ACTPlayerActionStateRoll::EnterState()
{
	ACTCharater->GetCapsuleComponent()->SetCapsuleHalfHeight(ACTCharater->RollHeight);
}

void ACTPlayerActionStateRoll::TickState()
{
}

void ACTPlayerActionStateRoll::ExitState()
{
	ACTCharater->GetCapsuleComponent()->SetCapsuleHalfHeight(ACTCharater->NormalHeight);
}

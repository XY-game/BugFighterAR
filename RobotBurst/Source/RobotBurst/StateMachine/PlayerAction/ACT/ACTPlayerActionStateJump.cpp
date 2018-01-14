// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionStateJump.h"

ACTPlayerActionStateJump::ACTPlayerActionStateJump()
{
}

void ACTPlayerActionStateJump::Move(FVector Movement)
{
	ACTCharater->AddMovementInput(Movement, ACTCharater->NormalSpeed);
}

void ACTPlayerActionStateJump::Jump()
{
	//ACTCharater->bPressedJump = true;
}

void ACTPlayerActionStateJump::EndJump()
{
	ACTCharater->bPressedJump = false;
}

void ACTPlayerActionStateJump::TickState()
{
	if (!ACTCharater->GetMovementComponent()->IsFalling()) {
		ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Idle);
	}
}

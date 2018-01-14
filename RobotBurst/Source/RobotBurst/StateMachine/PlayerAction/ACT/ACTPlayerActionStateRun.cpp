// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionStateRun.h"

ACTPlayerActionStateRun::ACTPlayerActionStateRun()
{
}


void ACTPlayerActionStateRun::Move(FVector Movement)
{
	ACTCharater->AddMovementInput(Movement, ACTCharater->NormalSpeed);
}

void ACTPlayerActionStateRun::Attack()
{
	ACTCharater->NormalAttack();
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Attack);
}

void ACTPlayerActionStateRun::Jump()
{
	ACTCharater->bPressedJump = true;
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Jump);
}

void ACTPlayerActionStateRun::EndJump()
{
	ACTCharater->bPressedJump = false;
}

void ACTPlayerActionStateRun::Skill(int id)
{
}

void ACTPlayerActionStateRun::Roll()
{
	ACTCharater->StartRoll();
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Roll);
}

void ACTPlayerActionStateRun::TickState()
{
	if (!ACTCharater->GetMovementComponent()->Velocity.Size() == 0.f) {
		ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Idle);
	}
}
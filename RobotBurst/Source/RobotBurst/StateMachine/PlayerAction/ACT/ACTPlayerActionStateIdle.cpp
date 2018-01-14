// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionStateIdle.h"

ACTPlayerActionStateIdle::ACTPlayerActionStateIdle()
{
}

void ACTPlayerActionStateIdle::Move(FVector Movement)
{
	ACTCharater->AddMovementInput(Movement, ACTCharater->NormalSpeed);
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Run);
}

void ACTPlayerActionStateIdle::Attack()
{
	ACTCharater->NormalAttack();
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Attack);
}

void ACTPlayerActionStateIdle::Jump()
{
	ACTCharater->bPressedJump = true;
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Jump);
}

void ACTPlayerActionStateIdle::EndJump()
{
	ACTCharater->bPressedJump = false;
}

void ACTPlayerActionStateIdle::Roll()
{
	ACTCharater->StartRoll();
	ACTCharater->ActionFSM->ChangeState(ECharaterActionStateType::Roll);
}

void ACTPlayerActionStateIdle::Skill(int id)
{
}

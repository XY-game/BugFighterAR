// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionStateAttack.h"

ACTPlayerActionStateAttack::ACTPlayerActionStateAttack()
{
}
void ACTPlayerActionStateAttack::Attack()
{
	ACTCharater->NormalAttack();
}

void ACTPlayerActionStateAttack::Move(FVector Movement)
{
	ACTCharater->AddMovementInput(Movement, ACTCharater->AttackSpeed);
}
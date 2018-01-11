// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTHeroCharacter.h"

void AACTHeroCharacter::Attack() {
	GEngine->AddOnScreenDebugMessage(30, 5.f, FColor::Red, TEXT("Attack"));
	PlayAnimMontage(CharacterAttackAnimMontageMap[CharacterAttackComboList[NextAttackCombNum]]);
	NextAttackCombNum++;
	if (NextAttackCombNum >= CharacterAttackComboList.Num()) {
		NextAttackCombNum = 0;
	}
}



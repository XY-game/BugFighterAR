// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTHeroCharacter.h"

void AACTHeroCharacter::Attack() {
	if (IsAttackSpacing)
		return;

	if (GetWorldTimerManager().IsTimerActive(AttackEndTimer)) {
		GetWorldTimerManager().ClearTimer(AttackEndTimer);
	}

	GEngine->AddOnScreenDebugMessage(30, 5.f, FColor::Red, TEXT("Attack"));
	PlayAnimMontage(CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].CharacterAttackAnimMontage);
	GetWorldTimerManager().SetTimer(AttackSpacingTimer, this, &AACTHeroCharacter::RefreshAttackSpacing,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimStartSpacing, false);
	GetWorldTimerManager().SetTimer(AttackEndTimer, this, &AACTHeroCharacter::RefreshAttackEnd,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimEndSpacing, false);
	GetWorldTimerManager().SetTimer(AttackDamageTimer, this, &AACTHeroCharacter::RefreshAttackDamageTime,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimStartSpacing + 
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimDamageTime, false);

	NextAttackCombNum++;
	if (NextAttackCombNum >= CharacterAttackComboList.Num()) {
		NextAttackCombNum = 0;
	}

	
	IsAttackSpacing = true;

}

void AACTHeroCharacter::RefreshAttackSpacing() {
	GEngine->AddOnScreenDebugMessage(31, 5.f, FColor::Red, TEXT("Attack Reset"));
	IsAttackSpacing = false;
	GetWorldTimerManager().ClearTimer(AttackSpacingTimer);
}

void AACTHeroCharacter::RefreshAttackEnd()
{
	NextAttackCombNum = 0;
}

void AACTHeroCharacter::RefreshAttackDamageTime()
{
}

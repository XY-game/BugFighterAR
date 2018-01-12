// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/HeroCharacter.h"
#include "ACTHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API AACTHeroCharacter : public AHeroCharacter
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	int NextAttackCombNum = 0;

	UPROPERTY()
	FTimerHandle AttackSpacingTimer;

	UPROPERTY()
	FTimerHandle AttackEndTimer;

	UPROPERTY()
	FTimerHandle AttackDamageTimer;

	UPROPERTY()
	bool IsAttackSpacing = false;

	UFUNCTION()
	void RefreshAttackSpacing();

	UFUNCTION()
	void RefreshAttackEnd();

	UFUNCTION()
	void RefreshAttackDamageTime();

public:
	UFUNCTION()
	void Attack();

};

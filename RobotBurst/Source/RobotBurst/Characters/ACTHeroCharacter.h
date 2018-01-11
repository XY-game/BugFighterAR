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

	int NextAttackCombNum = 0;

public:


	UFUNCTION()
	void Attack();

};

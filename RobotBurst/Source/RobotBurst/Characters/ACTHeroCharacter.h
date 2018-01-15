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
	FTimerHandle AttackComboEndTimer;

	UPROPERTY()
	FTimerHandle AttackDamageTimer;

	UPROPERTY()
	FTimerHandle AttackEndTimer;

	UPROPERTY()
	FTimerHandle RollEndTimer;

	UPROPERTY()
	bool IsAttackSpacing = false;

	UFUNCTION()
	void RefreshAttackSpacing();

	UFUNCTION()
	void RefreshComboAttack();

	UFUNCTION()
	void AttackEnd();

	UFUNCTION()
	void RefreshAttackDamageTime();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AACTHeroCharacter();

	UFUNCTION()
	void NormalAttack();

	UFUNCTION()
	void Move(FVector Movement);

	UFUNCTION()
	void Attack();

	UFUNCTION()
	void Jump();

	UFUNCTION()
	void EndJump();

	UFUNCTION()
	void Roll();

	UFUNCTION()
	void StartRoll();

	UFUNCTION()
	void EndRoll();
};

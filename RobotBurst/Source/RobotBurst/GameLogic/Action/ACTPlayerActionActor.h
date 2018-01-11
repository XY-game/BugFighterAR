// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameLogic/Action/BasePlayerActionActor.h"
#include "Characters/ACTHeroCharacter.h"
#include "ACTPlayerActionActor.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API AACTPlayerActionActor : public ABasePlayerActionActor
{
	GENERATED_BODY()


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
public:

	//UFUNCTION()
	//void TapPressed(FHitResult Result) override;


	UFUNCTION()
	void JoystickMove(FVector2D Movement) override;

	UFUNCTION(Category = PlayerAction, BlueprintCallable)
	void AttackButtonClick();
};

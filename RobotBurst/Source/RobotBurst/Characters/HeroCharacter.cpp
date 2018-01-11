// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroCharacter.h"
#include "Components/CapsuleComponent.h"

AHeroCharacter::AHeroCharacter() {
	// Set size for player capsule
	//GetCapsuleComponent()->InitCapsuleSize(4.2f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	PrimaryActorTick.bCanEverTick = true;
}




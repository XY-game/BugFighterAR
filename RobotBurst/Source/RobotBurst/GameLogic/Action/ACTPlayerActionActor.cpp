// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTPlayerActionActor.h"
#include "GameLogic/BaseGameLogicActor.h"
#include "Engine.h"

void AACTPlayerActionActor::BeginPlay() {
	Super::BeginPlay();
}

void AACTPlayerActionActor::JoystickMove(FVector2D Movement) {
	GEngine->AddOnScreenDebugMessage(22, 5.f, FColor::Red, TEXT("stick action move"));
	if (Movement == FVector2D::ZeroVector) {
		return;
	}
	FVector Dir = GameLogic->PlayerPawn->Camera->GetForwardVector() * Movement.Y
		+ GameLogic->PlayerPawn->Camera->GetRightVector() * Movement.X;
	//GameLogic->CurPlayerHero->AddMovementInput(Dir,20);

	AACTHeroCharacter* ACTHero;
	ACTHero = Cast<AACTHeroCharacter>(GameLogic->CurPlayerHero);
	ACTHero->Move(Dir);
}

void AACTPlayerActionActor::AttackButtonClick() {
	AACTHeroCharacter* ACTHero;
	ACTHero = Cast<AACTHeroCharacter>(GameLogic->CurPlayerHero);
	ACTHero->Attack();
}

void AACTPlayerActionActor::JumpButtonClick() {
	AACTHeroCharacter* ACTHero;
	ACTHero = Cast<AACTHeroCharacter>(GameLogic->CurPlayerHero);
	ACTHero->Jump();
}

void AACTPlayerActionActor::JumpButtonRelease() {
	AACTHeroCharacter* ACTHero;
	ACTHero = Cast<AACTHeroCharacter>(GameLogic->CurPlayerHero);
	ACTHero->EndJump();
}

void AACTPlayerActionActor::RollButtonClick()
{
	AACTHeroCharacter* ACTHero;
	ACTHero = Cast<AACTHeroCharacter>(GameLogic->CurPlayerHero);
	ACTHero->Roll();
}

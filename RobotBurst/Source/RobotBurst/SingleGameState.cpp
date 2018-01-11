
// Fill out your copyright notice in the Description page of Project Settings.

#include "SingleGameState.h"
#include "Engine.h"

ASingleGameState::ASingleGameState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {

}

void ASingleGameState::InitGame()
{
	GameLogic = GetWorld()->SpawnActor<ASingleGameLogicActor>(FVector::ZeroVector, FRotator::ZeroRotator);
}

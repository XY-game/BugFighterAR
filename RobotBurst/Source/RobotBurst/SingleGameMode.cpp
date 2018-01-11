// Fill out your copyright notice in the Description page of Project Settings.

#include "SingleGameMode.h"
#include "ARPlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "SingleGameState.h"
#include "GameLogic/SingleGameLogicActor.h"


class BaseGameLogic;

ASingleGameMode::ASingleGameMode() {
	// use our custom PlayerController class
	PlayerControllerClass = AARPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Project/Blueprints/ARPawn"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	 
	GameStateClass = ASingleGameState::StaticClass();

	static ConstructorHelpers::FClassFinder<ASingleGameLogicActor> GameLogicHelper(TEXT("/Game/Project/Blueprints/MySingleGameLogicActor"));
	GameLogic = GameLogicHelper.Class;

	
}

void ASingleGameMode::InitGameState()
{
	Super::InitGameState();

	ASingleGameState* const SingleGameState = GetGameState<ASingleGameState>();
	SingleGameState->InitGame();
}

void ASingleGameMode::CreatGameInitWidget()
{

}

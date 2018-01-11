// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameLogicActor.h"


// Sets default values
ABaseGameLogicActor::ABaseGameLogicActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameLogicActor::BeginPlay()
{
	Super::BeginPlay();
	InitLogic();
}

void ABaseGameLogicActor::Destroyed()
{
	ReleaseLogic();
}

// Called every frame
void ABaseGameLogicActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AHeroCharacter* ABaseGameLogicActor::CreatPlayerHero(FString HeroResPath, FVector Location, FRotator Rotator)
{
	return NULL;
}

void ABaseGameLogicActor::InitLogic()
{
	AssetManager = GetWorld()->SpawnActor<AGameAssetManagerActor>();
	StateMachine = new FSMMachine();
}

void ABaseGameLogicActor::ReleaseLogic()
{
}

void ABaseGameLogicActor::StartGame()
{
}

void ABaseGameLogicActor::SetHeroID(FString ID)
{
	CurHeroID = ID;
}

void ABaseGameLogicActor::InitHero(FVector Location)
{
}

void ABaseGameLogicActor::InitPlayerUI()
{
}

void ABaseGameLogicActor::TapPressed(FHitResult Result)
{
	/*UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
	NavSys->SimpleMoveToLocation(CurPlayerHero->Controller, Result.ImpactPoint);*/
}

void ABaseGameLogicActor::InitPlayerAction()
{
}


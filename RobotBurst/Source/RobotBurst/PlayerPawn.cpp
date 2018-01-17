// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerPawn.h"
#include "GameTypes.h"
#include "Engine.h"
#include "SingleGameState.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (UGameTypes::IsDebugMode) {
		ASingleGameState* GameState = GetWorld()->GetGameState<ASingleGameState>();
		SetActorLocation(GameState->GameLogic->CurPlayerHero->GetActorLocation() + FVector(-100, 0, 35));
	}
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


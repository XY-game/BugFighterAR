// Fill out your copyright notice in the Description page of Project Settings.

#include "ARPlayerController.h"
#include "GameTypes.h"
#include "Engine.h"
#include "ARInput.h"
#include "SingleGameState.h"
#include "GoogleARCoreFunctionLibrary.h"
#include "GoogleARCorePlane.h"

void AARPlayerController::BeginPlay()
{
	Super::BeginPlay();
	//InitJoyStick();
	MovementInput = FVector2D(0.f, 0.f);
}

bool AARPlayerController::GetHitPosition(const FVector2D & ScreenPoint, FVector & WorldPoint, FVector & ResultPoint) const
{
	FHitResult Hit;
	if (GetHitResultAtScreenPosition(ScreenPoint, ECollisionChannel::ECC_Visibility, true, Hit)) {
		ResultPoint = Hit.ImpactPoint;
		return true;
	}

	return false;
}

bool AARPlayerController::GetHitPositionForGoogleAR(const FVector2D & ScreenPoint, FVector & WorldPoint, FVector & ResultPoint) const
{
	FVector WorldDir(0.f);
	FVector ImpactNormal(0.f);
	UGoogleARCorePlane* ArCorePlane;

	if (UGameplayStatics::DeprojectScreenToWorld(this, ScreenPoint, WorldPoint, WorldDir)) {
		if (UGoogleARCoreSessionFunctionLibrary::LineTraceSingleOnPlanes(GetWorld(), WorldPoint, WorldPoint + WorldDir * 10000, ResultPoint,
			ImpactNormal, ArCorePlane)) {
			return true;
		}
	}

	return false;
}

AARPlayerController::AARPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AARPlayerController::ProcessPlayerInput(const float DeltaTime, const bool bGamePaused)
{
	if (!bGamePaused && PlayerInput && InputHandler && !bIgnoreInput)
	{
		InputHandler->UpdateDetection(DeltaTime);
	}

	Super::ProcessPlayerInput(DeltaTime, bGamePaused);
}

void AARPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	InputHandler = NewObject<UARInput>(this);	
	BIND_1P_ACTION(InputHandler, EGameKey::Tap, IE_Pressed, &AARPlayerController::OnTapPressed);
	InputComponent->BindAxis("MoveForward", this, &AARPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AARPlayerController::MoveRight);
	GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, TEXT("Creat Input"));
}

void AARPlayerController::OnTapPressed(const FVector2D& ScreenPosition, float DownTime) {

	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Press"));
	FVector WorldPosition(0.f);
	FVector ResultPosition(0.f);
	/*if (GetHitPositionForGoogleAR(ScreenPosition, WorldPosition, ResultPosition)) {
		GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, TEXT("Get Move Point"));
		ASingleGameState* GameState = GetWorld()->GetGameState<ASingleGameState>();
		if (GameState->GameLogic && GameState->GameLogic->IsGameInit) {
			UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
			NavSys->SimpleMoveToLocation(GameState->GameLogic->CurPlayerHero->Controller, ResultPosition);
			GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Red, TEXT("Nav Start"));
		}
	}*/

	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenPosition, ECollisionChannel::ECC_Visibility, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		ASingleGameState* GameState = GetWorld()->GetGameState<ASingleGameState>();
		GameState->GameLogic->TapPressed(HitResult);
	}
}

void AARPlayerController::SetJoyStickActive(bool IsActive)
{
	if (IsActive) {
		ActivateTouchInterface(JoyStick);
	}
	else
	{
		ActivateTouchInterface(NULL);
	}
		
}

void AARPlayerController::InitJoyStick()
{
	JoyStickBP = LoadClass<UObject>(NULL, TEXT("Blueprint'/Game/Project/Blueprints/UI/TouchInterface.TouchInterface_C'"));
	if (JoyStickBP) {
		GEngine->AddOnScreenDebugMessage(13, 5.f, FColor::Red, TEXT("js right"));
		JoyStick = NewObject<UPlayerTouchInterface>(GetTransientPackage(), JoyStickBP);
	}
}

void AARPlayerController::MoveForward(float AxisValue)
{
	MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void AARPlayerController::MoveRight(float AxisValue)
{
	MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}



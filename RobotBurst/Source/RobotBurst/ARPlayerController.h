// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ARInput.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "UI/PlayerTouchInterface.h"
#include "ARPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API AARPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	/** Custom input handler. */
	UPROPERTY()
	class UARInput* InputHandler;

	/** if set, input and camera updates will be ignored */
	uint8 bIgnoreInput : 1;

	bool GetHitPosition (const FVector2D & ScreenPoint, FVector & WorldPoint, FVector & ResultPoint) const;

	bool GetHitPositionForGoogleAR(const FVector2D & ScreenPoint, FVector & WorldPoint, FVector & ResultPoint) const;

	/** update input detection */
	virtual void ProcessPlayerInput(const float DeltaTime, const bool bGamePaused) override;
	
	void SetupInputComponent();

public:
	AARPlayerController(const FObjectInitializer& ObjectInitializer);


public:
	UPROPERTY()
	FVector2D MovementInput;

	UPROPERTY(Category = "Joystick", EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UPlayerTouchInterface> JoyStickBP;

	UPROPERTY(Category = "Joystick", EditAnywhere, BlueprintReadWrite)
		UPlayerTouchInterface* JoyStick;

	void OnTapPressed(const FVector2D& ScreenPosition, float DownTime);
	
	void SetJoyStickActive(bool IsActive);

	void InitJoyStick();

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);
};

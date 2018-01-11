// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "GameLogic/BaseGameLogicActor.h"
#include "BasePlayerActionActor.generated.h"

UCLASS()
class ROBOTBURST_API ABasePlayerActionActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePlayerActionActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	class ABaseGameLogicActor* GameLogic;
	
	UFUNCTION()
	virtual void TapPressed(FHitResult Result);

	UFUNCTION()
	virtual void JoystickMove(FVector2D Movement);

};

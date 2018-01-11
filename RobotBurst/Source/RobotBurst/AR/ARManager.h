// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AR/ARDataInterface.h"
#include "ARManager.generated.h"

UCLASS()
class ROBOTBURST_API AARManager : public AActor, public IARDataInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

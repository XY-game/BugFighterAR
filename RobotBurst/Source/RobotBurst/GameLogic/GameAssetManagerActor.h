// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameAssetManagerActor.generated.h"

UCLASS()
class ROBOTBURST_API AGameAssetManagerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameAssetManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY()
	TMap<FString, UObject*> BPForCAssetMap;

	UPROPERTY()
		TMap<FString, UObject*> BPAssetMap;

	UFUNCTION()
		UObject* LoadBPForCAssetMap(FString AssetPath);

	UFUNCTION()
		void RemoveBPForCAssetMap(FString AssetPath);

	UFUNCTION()
	void EmptyBPForCAssetMap();

	UFUNCTION()
		UObject* LoadBPAssetMap(FString AssetPath);

	UFUNCTION()
		void RemoveBPAssetMap(FString AssetPath);

	UFUNCTION()
		void EmptyBPAssetMap();
};

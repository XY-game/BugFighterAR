// Fill out your copyright notice in the Description page of Project Settings.

#include "GameAssetManagerActor.h"


// Sets default values
AGameAssetManagerActor::AGameAssetManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameAssetManagerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameAssetManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UObject * AGameAssetManagerActor::LoadBPForCAssetMap(FString AssetPath)
{
	if (BPForCAssetMap.Contains(*AssetPath)) {
		return BPForCAssetMap[*AssetPath];
	}
	else
	{
		UObject* NewAsset = LoadClass<UObject>(NULL, *AssetPath);
		if (NewAsset) {
			BPForCAssetMap.Add(*AssetPath, NewAsset);
			return NewAsset;
		}
	}
	
	return nullptr;
}

void AGameAssetManagerActor::RemoveBPForCAssetMap(FString AssetPath)
{
	if (BPForCAssetMap.Contains(*AssetPath)) {
		BPForCAssetMap.Remove(*AssetPath);
	}
}

void AGameAssetManagerActor::EmptyBPForCAssetMap()
{
	BPForCAssetMap.Empty();
}

UObject * AGameAssetManagerActor::LoadBPAssetMap(FString AssetPath)
{
	
		if (BPAssetMap.Contains(*AssetPath)) {
			return BPAssetMap[*AssetPath];
		}
		else
		{
			UObject* NewAsset = LoadObject<UObject>(NULL, *AssetPath);
			if (NewAsset) {
				BPAssetMap.Add(*AssetPath, NewAsset);
				return NewAsset;
			}
		}
	return nullptr;
}

void AGameAssetManagerActor::RemoveBPAssetMap(FString AssetPath)
{
	if (BPAssetMap.Contains(*AssetPath)) {
		BPAssetMap.Remove(*AssetPath);
	}
}

void AGameAssetManagerActor::EmptyBPAssetMap()
{
	BPAssetMap.Empty();
}




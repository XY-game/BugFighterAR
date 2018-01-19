// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameLogic/BaseGameLogicActor.h"
#include "UI/BaseUserWidget.h"
#include "UI/GameInputWidget.h"
#include "ARPlayerController.h"
#include "SingleGameLogicActor.generated.h"


/**
 * 
 */
UCLASS()
class ROBOTBURST_API ASingleGameLogicActor : public ABaseGameLogicActor
{
	GENERATED_BODY()
	
public:

	ASingleGameLogicActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY()
	AARPlayerController* PlayerController;

public:
	UPROPERTY()
		class UBaseUserWidget* InitGameUI;

	UPROPERTY()
		class UGameInputWidget* PlayerUI;

	UPROPERTY(BlueprintReadWrite, Category = "TestCube")
		TSubclassOf<AStaticMeshActor> CubeActor;

	UFUNCTION()
	void InitLogic() override;

	UFUNCTION()
	virtual AHeroCharacter* CreatPlayerHero(FString HeroResPath, FVector Location, FRotator Rotator) override;

	UFUNCTION()
	void InitNavMesh(FVector Location);

	UFUNCTION(BlueprintCallable)
	void StartGame()override;

	UFUNCTION()
	void InitHero(FVector Location) override;

	UFUNCTION()
	virtual void InitHeroWeapon(FName Path, FName WeaponSocket) override;

	UFUNCTION()
	void InitPlayerUI() override;

	UFUNCTION()
	void InitPlayerAction() override;

	UFUNCTION()
	void TapPressed(FHitResult Result) override;
};
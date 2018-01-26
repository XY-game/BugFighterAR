// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Pawn.h"
#include "GameTypes.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ROBOTBURST_API ABaseWeapon : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WeaponData)
		TEnumAsByte<ECharaterTeam::Type> CurTeam;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WeaponData)
		FName HitParticlePath;

	UFUNCTION()
	virtual void OnWeaponOverlapBegin(class UPrimitiveComponent* OverLapComp, class AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
		const FHitResult & SweepResult);
	

	virtual void OnWeaponOverlapEnd(class UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};

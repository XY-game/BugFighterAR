// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/StaticMeshWeapon.h"
#include "BladeWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API ABladeWeapon : public AStaticMeshWeapon
{
	GENERATED_BODY()

	ABladeWeapon();

	UFUNCTION()
	void OnWeaponOverlap(class UPrimitiveComponent* OverLapComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult & SweepResult) override;
	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "StaticMeshWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API AStaticMeshWeapon : public ABaseWeapon
{
	GENERATED_BODY()
	
public: 
	AStaticMeshWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponMesh)
	UStaticMeshComponent* Mesh;

	void OnWeaponOverlap(class UPrimitiveComponent* OverLapComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult & SweepResult) override;
	
	
};
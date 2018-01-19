// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "GameTypes.h"
#include "FHeroTableRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct ROBOTBURST_API FHeroTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		FName HeroName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		TEnumAsByte<EHeroType::Type> HeroType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		float NormalHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		float RollHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName HeroActorPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName AttackAnimRowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName AttackComboRowName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		FName CharacterRollAnimMontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		FName CharacterDieAnimMontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		bool IsHeroHasWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hero)
		TArray<FName> WeaponIds;



};


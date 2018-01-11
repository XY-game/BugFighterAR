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
	/** Icon to use for Achivement */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName HeroActorPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName AttackAnimRowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hero)
		FName AttackComboRowName;
};


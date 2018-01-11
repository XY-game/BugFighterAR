// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FCharAttackComboRowBase.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct ROBOTBURST_API FCharAttackComboRowBase : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	FName HeroName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	TArray<FName> CharacterAttackComboList;
};

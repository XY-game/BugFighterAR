// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FCharAttackAnimTableRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct ROBOTBURST_API FCharAttackAnimTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	FName HeroName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	TMap<FName, FName> CharacterAttackAnimMontagePath;
	
	
};

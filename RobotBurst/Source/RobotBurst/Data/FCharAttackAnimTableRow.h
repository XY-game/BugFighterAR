// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine.h"
#include "FCharAttackAnimTableRow.generated.h"

USTRUCT(BlueprintType)
struct ROBOTBURST_API FAnimInfoAdpter {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimMontage* CharacterAttackAnimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimStartSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimEndSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimStartDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimDamageTime;
};

USTRUCT(BlueprintType)
struct ROBOTBURST_API FAnimInfo {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName CharacterAttackAnimMontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimStartSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimEndSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimStartDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AnimDamageTime;
};

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
	TMap<FName, FAnimInfo> AnimInfos;
	
};

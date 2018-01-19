// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "FWeaponTableRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct ROBOTBURST_API FWeaponTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Weapon)
		FName WeaponName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		FName WeaponPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Weapon)
		FName WeaponSocket;
};

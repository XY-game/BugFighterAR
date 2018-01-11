// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Transform.h"
#include "ARDataInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UARDataInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class ROBOTBURST_API IARDataInterface
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "ARData")
	bool IsARPlanesActive();

	UFUNCTION(BlueprintImplementableEvent, Category = "ARData")
	TArray<FTransform> GetMainARWorldCenterTransform();
};

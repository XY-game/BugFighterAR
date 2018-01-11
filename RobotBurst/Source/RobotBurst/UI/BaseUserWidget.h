// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameLogic/BaseGameLogicActor.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public :
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	class ABaseGameLogicActor* GameLogic;
	
	
};

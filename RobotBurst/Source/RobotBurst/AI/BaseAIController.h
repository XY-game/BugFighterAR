// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"


class UBehaviorTreeComponent;
class UBlackboardComponent;

/**
 * 
 */
UCLASS()
class ROBOTBURST_API ABaseAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	ABaseAIController(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(transient)
	UBlackboardComponent* BlackBoardComp;

	UPROPERTY(transient)
	UBehaviorTreeComponent* BehaviorComp;

	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackBoardComp; }
	FORCEINLINE UBehaviorTreeComponent* GetBehaviorComp() const { return BehaviorComp; }
	
	
};

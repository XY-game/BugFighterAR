// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ABaseAIController::ABaseAIController(const FObjectInitializer& ObjectInitializer) {
	BlackBoardComp = ObjectInitializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboadrComp"));
	BehaviorComp = ObjectInitializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComp"));
	BrainComponent = ObjectInitializer.CreateDefaultSubobject<UBrainComponent>(this, TEXT("BrainComp"));
}




// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "AI/BaseAIController.h"
#include "Engine/EngineTypes.h"
#include "BTServiceCheckTarget.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTBURST_API UBTServiceCheckTarget : public UBTService_BlackboardBase
{
	GENERATED_UCLASS_BODY()
protected:

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual FString GetStaticDescription() const override;
	FVector MyLocation;
	ABaseAIController* AI_CON_Ref;
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		struct FBlackboardKeySelector TargetToFollow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		struct FBlackboardKeySelector TargetLocation;
};

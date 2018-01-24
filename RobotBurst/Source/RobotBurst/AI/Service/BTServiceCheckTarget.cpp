// Fill out your copyright notice in the Description page of Project Settings.
#include "BTServiceCheckTarget.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTServiceCheckTarget::UBTServiceCheckTarget(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	NodeName = "CheckTarget";
}


FString UBTServiceCheckTarget::GetStaticDescription() const
{
	return FString::Printf(TEXT("CheckTarget"));
}

void UBTServiceCheckTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();
	//APlayerCar* MyPawn = Cast<APlayerCar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	ABaseAIController* MyControllerRef = Cast<ABaseAIController>(OwnerComp.GetAIOwner());
	if (AI_CON_Ref == nullptr)
	{
		AI_CON_Ref = MyControllerRef;
	}
	//if (MyPawn)
	//{
	//	OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetToFollow", MyPawn);
	//	OwnerComp.GetBlackboardComponent()->SetValueAsVector("TargetLocation", MyPawn->GetActorLocation());
	//	if (MyControllerRef)
	//	{
	//		ABaseEnemyCharacter* EnemyPawn = Cast<ABaseEnemyCharacter>(MyControllerRef->GetPawn());
	//		if (EnemyPawn)
	//		{
	//			EnemyPawn->Target = MyPawn;
	//		}
	//	}
	//}
}
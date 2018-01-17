// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Data/FCharAttackAnimTableRow.h"
#include "StateMachine/FSMMachine.h"
#include "GameTypes.h"
#include "BaseCharacter.generated.h"

UCLASS()
class ROBOTBURST_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharData)
	float NormalSpeed = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharData)
	float AttackSpeed = 20;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		float NormalHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		float RollHeight;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
	TEnumAsByte<ECharaterBeDamageType::Type> BeDamageType;
	
	/** Current health of this Pawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharData)
		TMap<FName, FAnimInfoAdpter> CharacterAttackAnimInfo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		TArray<FName> CharacterAttackComboList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		UAnimMontage* CharacterRollAnimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		UAnimMontage* CharacterDieAnimMontage;

	//角色行动状态状态机
	FSMMachine* ActionStateMachine;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Data/FCharAttackAnimTableRow.h"
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
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	/** Current health of this Pawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
		int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharData)
		TMap<FName, FAnimInfoAdpter> CharacterAttackAnimInfo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CharData)
		TArray<FName> CharacterAttackComboList;
};

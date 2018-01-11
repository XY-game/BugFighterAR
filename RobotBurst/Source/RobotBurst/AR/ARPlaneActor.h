// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARPlaneActor.generated.h"

UCLASS()
class ROBOTBURST_API AARPlaneActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AARPlaneActor();

	/* The procedural mesh component */
	UPROPERTY(Category = GoogleARCorePlaneActor, EditAnywhere, BlueprintReadWrite)
		class UProceduralMeshComponent* PlanePolygonMeshComponent;

	/** When set to true, the actor will remove the ARAnchor object from the current tracking session when the Actor gets destroyed.*/
	UPROPERTY(Category = GoogleARCorePlaneActor, BlueprintReadWrite)
		class UGoogleARCorePlane* ARCorePlaneObject = nullptr;

	/** The feathering distance for the polygon edge. Default to 10 cm*/
	UPROPERTY(Category = GoogleARCorePlaneActor, EditAnywhere, BlueprintReadWrite)
		float EdgeFeatheringDistance = 10.0f;

	UFUNCTION(BlueprintImplementableEvent)
		FTransform GetMainPlaneWorldTransform();

	UFUNCTION(Category = GoogleARCorePlaneActor, BlueprintCallable)
		FTransform GetMainPlaneWorldTransformImpl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void UpdatePlanePolygonMesh();

};

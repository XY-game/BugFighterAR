// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshWeapon.h"
#include "Engine.h"

AStaticMeshWeapon::AStaticMeshWeapon() {
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
	Mesh->SetNotifyRigidBodyCollision(true);
	Mesh->SetCollisionProfileName(TEXT("OverlapAll"));
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AStaticMeshWeapon::OnWeaponOverlap);
}

void AStaticMeshWeapon::OnWeaponOverlap(UPrimitiveComponent * OverLapComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Mesh) {
		 
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshWeapon.h"
#include "Engine.h"
#include "BaseGameState.h"

AStaticMeshWeapon::AStaticMeshWeapon() {
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
	Mesh->SetNotifyRigidBodyCollision(true);
	Mesh->SetCollisionProfileName(TEXT("OverlapAll"));
	//Mesh->OnComponentBeginOverlap.AddDynamic(this, &AStaticMeshWeapon::OnWeaponOverlapBegin);
}

void AStaticMeshWeapon::OnWeaponOverlapBegin(UPrimitiveComponent * OverLapComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Mesh) {
		GEngine->AddOnScreenDebugMessage(40, 1.f, FColor::Red, TEXT("Weapon Hit"));
	}
}

void AStaticMeshWeapon::OnWeaponOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

void AStaticMeshWeapon::CreatHitParticle()
{
	FCollisionQueryParams TraceParams(FName(TEXT("VictoreCore Trace")), true, this);
	TraceParams.bTraceComplex = true;
	//TraceParams.bTraceAsyncScene = true;
	//TraceParams.bReturnPhysicalMaterial = ReturnPhysMat;

	//Ignore Actors
	TraceParams.AddIgnoredActor(this);

	//Re-initialize hit info
	FHitResult HitOut = FHitResult(ForceInit);
	TArray<FName> HitSockets = Mesh->GetAllSocketNames();
	if (HitSockets.Num() > 1) {
		for (int i = 0;i < HitSockets.Num() - 1;i++) {
			if (GetWorld()->LineTraceSingleByChannel(HitOut,Mesh->GetSocketLocation(HitSockets[i]), Mesh->GetSocketLocation(HitSockets[i + 1]),
				ECC_Pawn, TraceParams)) {
				ABaseGameState* const BaseGameState = GetWorld()->GetGameState<ABaseGameState>();
				BaseGameState->GameLogic->CreatParticle(HitParticlePath, HitOut.ImpactPoint, GetActorRotation(), true);
			}
		}
	}


	//ABaseGameState* const BaseGameState = GetWorld()->GetGameState<ABaseGameState>();
	//BaseGameState->GameLogic->CreatParticle(HitParticlePath, SweepResult.Location, GetActorRotation(), true);
}

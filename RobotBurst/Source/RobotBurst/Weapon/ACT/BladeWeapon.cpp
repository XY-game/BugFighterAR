// Fill out your copyright notice in the Description page of Project Settings.

#include "BladeWeapon.h"
#include "Characters/BaseCharacter.h"
#include "BaseGameState.h"

ABladeWeapon::ABladeWeapon() {
	//Mesh->OnComponentBeginOverlap.AddDynamic(this, &AStaticMeshWeapon::OnWeaponOverlap);
}

void ABladeWeapon::OnWeaponOverlap(UPrimitiveComponent * OverLapComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ABaseCharacter* Character = Cast<ABaseCharacter>(OtherActor);
	if (Character && Character->CurTeam != CurTeam) {
		GEngine->AddOnScreenDebugMessage(40, 1.f, FColor::Red, TEXT("Weapon Hit"));
		ABaseGameState* const BaseGameState = GetWorld()->GetGameState<ABaseGameState>();
		BaseGameState->GameLogic->CreatParticle(HitParticlePath, SweepResult.Location, GetActorRotation(),true);
	}
}

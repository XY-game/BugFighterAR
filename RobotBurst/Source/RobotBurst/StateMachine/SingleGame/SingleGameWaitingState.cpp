// Fill out your copyright notice in the Description page of Project Settings.

#include "SingleGameWaitingState.h"
#include "Transform.h"

SingleGameWaitingState::SingleGameWaitingState()
{
}

void SingleGameWaitingState::EnterState()
{
	IsARScanReady = false;	
}

void SingleGameWaitingState::TickState()
{
	if (!GameLogic->ARData)
		return;

	bool IsPlanesActive = false;

	if (GameLogic->ARData->GetClass()->ImplementsInterface(UARDataInterface::StaticClass()))
	{
		IsPlanesActive = IARDataInterface::Execute_IsARPlanesActive(GameLogic->ARData);
	}

	if (IsARScanReady) {
		
		if (!IsPlanesActive) {
			GameLogic->ArScanedEvent.Broadcast(false);
			IsARScanReady = false;
		}
	}
	else {
		if (IsPlanesActive) {
			GameLogic->ArScanedEvent.Broadcast(true);
			IsARScanReady = true;
		}
	}
}

void SingleGameWaitingState::ExitState()
{
}

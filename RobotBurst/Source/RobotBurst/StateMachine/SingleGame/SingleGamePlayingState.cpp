// Fill out your copyright notice in the Description page of Project Settings.

#include "SingleGamePlayingState.h"

SingleGamePlayingState::SingleGamePlayingState()
{
}

void SingleGamePlayingState::EnterState()
{
	IsARScanReady = false;
}

void SingleGamePlayingState::TickState()
{
	if (!GameLogic->ARData)
		return;
}

void SingleGamePlayingState::ExitState()
{
}

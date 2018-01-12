// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "StateMachine/SingleGame/SingleGameBaseState.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROBOTBURST_API SingleGamePlayingState : public SingleGameBaseState
{
private:
	bool IsARScanReady = false;

public:
	SingleGamePlayingState();

	void EnterState() override;

	void TickState() override;

	void ExitState() override;
};

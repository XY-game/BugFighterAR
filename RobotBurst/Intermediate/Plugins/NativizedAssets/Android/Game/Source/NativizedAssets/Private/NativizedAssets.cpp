// Fill out your copyright notice in the Description page of Project Settings.

#include "NativizedAssets.h"
#include "ModuleInterface.h"
#include "ModuleManager.h"

class FNativizedAssetsModule : public IModuleInterface
{	
	virtual void StartupModule() override
	{
			
	}
};

IMPLEMENT_MODULE( FNativizedAssetsModule, NativizedAssets );

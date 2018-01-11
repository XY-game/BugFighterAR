// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLogic/BaseGameLogicActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameLogicActor() {}
// Cross Module References
	ROBOTBURST_API UFunction* Z_Construct_UDelegateFunction_RobotBurst_ArScanedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameLogicActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameLogicActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_CreatPlayerHero();
	ROBOTBURST_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitHero();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitLogic();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerAction();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerUI();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_ReleaseLogic();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_SetHeroID();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_StartGame();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABaseGameLogicActor_TapPressed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABasePlayerActionActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	ROBOTBURST_API UEnum* Z_Construct_UEnum_RobotBurst_EHeroType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARManager_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AGameAssetManagerActor_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_RobotBurst_ArScanedEvent__DelegateSignature()
	{
		struct _Script_RobotBurst_eventArScanedEvent_Parms
		{
			bool IsScaned;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsScaned_SetBit = [](void* Obj){ ((_Script_RobotBurst_eventArScanedEvent_Parms*)Obj)->IsScaned = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScaned = { UE4CodeGen_Private::EPropertyClass::Bool, "IsScaned", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_RobotBurst_eventArScanedEvent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsScaned_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsScaned,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RobotBurst, "ArScanedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_RobotBurst_eventArScanedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void ABaseGameLogicActor::StaticRegisterNativesABaseGameLogicActor()
	{
		UClass* Class = ABaseGameLogicActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatPlayerHero", (Native)&ABaseGameLogicActor::execCreatPlayerHero },
			{ "InitHero", (Native)&ABaseGameLogicActor::execInitHero },
			{ "InitLogic", (Native)&ABaseGameLogicActor::execInitLogic },
			{ "InitPlayerAction", (Native)&ABaseGameLogicActor::execInitPlayerAction },
			{ "InitPlayerUI", (Native)&ABaseGameLogicActor::execInitPlayerUI },
			{ "ReleaseLogic", (Native)&ABaseGameLogicActor::execReleaseLogic },
			{ "SetHeroID", (Native)&ABaseGameLogicActor::execSetHeroID },
			{ "StartGame", (Native)&ABaseGameLogicActor::execStartGame },
			{ "TapPressed", (Native)&ABaseGameLogicActor::execTapPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_CreatPlayerHero()
	{
		struct BaseGameLogicActor_eventCreatPlayerHero_Parms
		{
			FString HeroResPath;
			FVector Location;
			FRotator Rotator;
			AHeroCharacter* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventCreatPlayerHero_Parms, ReturnValue), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventCreatPlayerHero_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventCreatPlayerHero_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeroResPath = { UE4CodeGen_Private::EPropertyClass::Str, "HeroResPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventCreatPlayerHero_Parms, HeroResPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroResPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "CreatPlayerHero", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820400, sizeof(BaseGameLogicActor_eventCreatPlayerHero_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitHero()
	{
		struct BaseGameLogicActor_eventInitHero_Parms
		{
			FVector Location;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventInitHero_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "InitHero", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820400, sizeof(BaseGameLogicActor_eventInitHero_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "InitLogic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "InitPlayerAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "InitPlayerUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_ReleaseLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "ReleaseLogic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_SetHeroID()
	{
		struct BaseGameLogicActor_eventSetHeroID_Parms
		{
			FString ID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Str, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventSetHeroID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "SetHeroID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BaseGameLogicActor_eventSetHeroID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "StartGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseGameLogicActor_TapPressed()
	{
		struct BaseGameLogicActor_eventTapPressed_Parms
		{
			FHitResult Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Struct, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BaseGameLogicActor_eventTapPressed_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameLogicActor, "TapPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(BaseGameLogicActor_eventTapPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseGameLogicActor_NoRegister()
	{
		return ABaseGameLogicActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseGameLogicActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABaseGameLogicActor_CreatPlayerHero, "CreatPlayerHero" }, // 55638033
				{ &Z_Construct_UFunction_ABaseGameLogicActor_InitHero, "InitHero" }, // 196437569
				{ &Z_Construct_UFunction_ABaseGameLogicActor_InitLogic, "InitLogic" }, // 258229228
				{ &Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerAction, "InitPlayerAction" }, // 911289215
				{ &Z_Construct_UFunction_ABaseGameLogicActor_InitPlayerUI, "InitPlayerUI" }, // 2504943872
				{ &Z_Construct_UFunction_ABaseGameLogicActor_ReleaseLogic, "ReleaseLogic" }, // 3941138778
				{ &Z_Construct_UFunction_ABaseGameLogicActor_SetHeroID, "SetHeroID" }, // 202861731
				{ &Z_Construct_UFunction_ABaseGameLogicActor_StartGame, "StartGame" }, // 3864615685
				{ &Z_Construct_UFunction_ABaseGameLogicActor_TapPressed, "TapPressed" }, // 3679931588
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameLogic/BaseGameLogicActor.h" },
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArScanedEvent_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ArScanedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ArScanedEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, ArScanedEvent), Z_Construct_UDelegateFunction_RobotBurst_ArScanedEvent__DelegateSignature, METADATA_PARAMS(NewProp_ArScanedEvent_MetaData, ARRAY_COUNT(NewProp_ArScanedEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharComboDataTable_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharComboDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "CharComboDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CharComboDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_CharComboDataTable_MetaData, ARRAY_COUNT(NewProp_CharComboDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharAnimDataTable_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharAnimDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "CharAnimDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CharAnimDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_CharAnimDataTable_MetaData, ARRAY_COUNT(NewProp_CharAnimDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroDataTable_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeroDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "HeroDataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, HeroDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_HeroDataTable_MetaData, ARRAY_COUNT(NewProp_HeroDataTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurNavMeshBoundsVolume_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
				{ "ToolTip", "\xd1\xb0\xc2\xb7??\xcd\xbc????" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurNavMeshBoundsVolume = { UE4CodeGen_Private::EPropertyClass::Object, "CurNavMeshBoundsVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CurNavMeshBoundsVolume), Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister, METADATA_PARAMS(NewProp_CurNavMeshBoundsVolume_MetaData, ARRAY_COUNT(NewProp_CurNavMeshBoundsVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHeroID_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurHeroID = { UE4CodeGen_Private::EPropertyClass::Str, "CurHeroID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CurHeroID), METADATA_PARAMS(NewProp_CurHeroID_MetaData, ARRAY_COUNT(NewProp_CurHeroID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAction_MetaData[] = {
				{ "Category", "Action" },
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAction = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, PlayerAction), Z_Construct_UClass_ABasePlayerActionActor_NoRegister, METADATA_PARAMS(NewProp_PlayerAction_MetaData, ARRAY_COUNT(NewProp_PlayerAction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurPlayerHero_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
				{ "ToolTip", "??\xc7\xb0????\xd3\xa2??" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurPlayerHero = { UE4CodeGen_Private::EPropertyClass::Object, "CurPlayerHero", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CurPlayerHero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(NewProp_CurPlayerHero_MetaData, ARRAY_COUNT(NewProp_CurPlayerHero_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, PlayerPawn), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(NewProp_PlayerPawn_MetaData, ARRAY_COUNT(NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHeroType_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurHeroType = { UE4CodeGen_Private::EPropertyClass::Byte, "CurHeroType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, CurHeroType), Z_Construct_UEnum_RobotBurst_EHeroType, METADATA_PARAMS(NewProp_CurHeroType_MetaData, ARRAY_COUNT(NewProp_CurHeroType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHero_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
				{ "ToolTip", "????\xd3\xa2??????\xc4\xa3??" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHero = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerHero", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, PlayerHero), Z_Construct_UClass_AHeroCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PlayerHero_MetaData, ARRAY_COUNT(NewProp_PlayerHero_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARCoreManager_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
				{ "ToolTip", "AR??????" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ARCoreManager = { UE4CodeGen_Private::EPropertyClass::Class, "ARCoreManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, ARCoreManager), Z_Construct_UClass_AARManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ARCoreManager_MetaData, ARRAY_COUNT(NewProp_ARCoreManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGameInit_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			auto NewProp_IsGameInit_SetBit = [](void* Obj){ ((ABaseGameLogicActor*)Obj)->IsGameInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGameInit = { UE4CodeGen_Private::EPropertyClass::Bool, "IsGameInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseGameLogicActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsGameInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsGameInit_MetaData, ARRAY_COUNT(NewProp_IsGameInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetManager_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/BaseGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetManager = { UE4CodeGen_Private::EPropertyClass::Object, "AssetManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABaseGameLogicActor, AssetManager), Z_Construct_UClass_AGameAssetManagerActor_NoRegister, METADATA_PARAMS(NewProp_AssetManager_MetaData, ARRAY_COUNT(NewProp_AssetManager_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArScanedEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharComboDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharAnimDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroDataTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurNavMeshBoundsVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurHeroID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurPlayerHero,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurHeroType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerHero,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ARCoreManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsGameInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetManager,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseGameLogicActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseGameLogicActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGameLogicActor, 160946797);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGameLogicActor(Z_Construct_UClass_ABaseGameLogicActor, &ABaseGameLogicActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ABaseGameLogicActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameLogicActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

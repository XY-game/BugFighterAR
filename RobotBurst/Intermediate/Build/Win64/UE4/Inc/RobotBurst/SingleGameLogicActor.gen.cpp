// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLogic/SingleGameLogicActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleGameLogicActor() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameLogicActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameLogicActor();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameLogicActor();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_CreatPlayerHero();
	ROBOTBURST_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitHero();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitLogic();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitNavMesh();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerAction();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerUI();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_StartGame();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ASingleGameLogicActor_TapPressed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameInputWidget_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlayerController_NoRegister();
// End Cross Module References
	void ASingleGameLogicActor::StaticRegisterNativesASingleGameLogicActor()
	{
		UClass* Class = ASingleGameLogicActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatPlayerHero", (Native)&ASingleGameLogicActor::execCreatPlayerHero },
			{ "InitHero", (Native)&ASingleGameLogicActor::execInitHero },
			{ "InitLogic", (Native)&ASingleGameLogicActor::execInitLogic },
			{ "InitNavMesh", (Native)&ASingleGameLogicActor::execInitNavMesh },
			{ "InitPlayerAction", (Native)&ASingleGameLogicActor::execInitPlayerAction },
			{ "InitPlayerUI", (Native)&ASingleGameLogicActor::execInitPlayerUI },
			{ "StartGame", (Native)&ASingleGameLogicActor::execStartGame },
			{ "TapPressed", (Native)&ASingleGameLogicActor::execTapPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_CreatPlayerHero()
	{
		struct SingleGameLogicActor_eventCreatPlayerHero_Parms
		{
			FString HeroResPath;
			FVector Location;
			FRotator Rotator;
			AHeroCharacter* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventCreatPlayerHero_Parms, ReturnValue), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventCreatPlayerHero_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventCreatPlayerHero_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeroResPath = { UE4CodeGen_Private::EPropertyClass::Str, "HeroResPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventCreatPlayerHero_Parms, HeroResPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroResPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "CreatPlayerHero", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820400, sizeof(SingleGameLogicActor_eventCreatPlayerHero_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitHero()
	{
		struct SingleGameLogicActor_eventInitHero_Parms
		{
			FTransform location;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventInitHero_Parms, location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "InitHero", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(SingleGameLogicActor_eventInitHero_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "InitLogic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitNavMesh()
	{
		struct SingleGameLogicActor_eventInitNavMesh_Parms
		{
			FTransform Center;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventInitNavMesh_Parms, Center), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "InitNavMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(SingleGameLogicActor_eventInitNavMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "InitPlayerAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "InitPlayerUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "StartGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASingleGameLogicActor_TapPressed()
	{
		struct SingleGameLogicActor_eventTapPressed_Parms
		{
			FHitResult Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Struct, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(SingleGameLogicActor_eventTapPressed_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleGameLogicActor, "TapPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SingleGameLogicActor_eventTapPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASingleGameLogicActor_NoRegister()
	{
		return ASingleGameLogicActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASingleGameLogicActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABaseGameLogicActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASingleGameLogicActor_CreatPlayerHero, "CreatPlayerHero" }, // 2001533927
				{ &Z_Construct_UFunction_ASingleGameLogicActor_InitHero, "InitHero" }, // 1085282282
				{ &Z_Construct_UFunction_ASingleGameLogicActor_InitLogic, "InitLogic" }, // 1843332909
				{ &Z_Construct_UFunction_ASingleGameLogicActor_InitNavMesh, "InitNavMesh" }, // 17440217
				{ &Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerAction, "InitPlayerAction" }, // 2045584951
				{ &Z_Construct_UFunction_ASingleGameLogicActor_InitPlayerUI, "InitPlayerUI" }, // 17713527
				{ &Z_Construct_UFunction_ASingleGameLogicActor_StartGame, "StartGame" }, // 4197876630
				{ &Z_Construct_UFunction_ASingleGameLogicActor_TapPressed, "TapPressed" }, // 373335625
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameLogic/SingleGameLogicActor.h" },
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeActor_MetaData[] = {
				{ "Category", "TestCube" },
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CubeActor = { UE4CodeGen_Private::EPropertyClass::Class, "CubeActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000004, 1, nullptr, STRUCT_OFFSET(ASingleGameLogicActor, CubeActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CubeActor_MetaData, ARRAY_COUNT(NewProp_CubeActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUI_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerUI = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ASingleGameLogicActor, PlayerUI), Z_Construct_UClass_UGameInputWidget_NoRegister, METADATA_PARAMS(NewProp_PlayerUI_MetaData, ARRAY_COUNT(NewProp_PlayerUI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitGameUI_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitGameUI = { UE4CodeGen_Private::EPropertyClass::Object, "InitGameUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ASingleGameLogicActor, InitGameUI), Z_Construct_UClass_UBaseUserWidget_NoRegister, METADATA_PARAMS(NewProp_InitGameUI_MetaData, ARRAY_COUNT(NewProp_InitGameUI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/SingleGameLogicActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ASingleGameLogicActor, PlayerController), Z_Construct_UClass_AARPlayerController_NoRegister, METADATA_PARAMS(NewProp_PlayerController_MetaData, ARRAY_COUNT(NewProp_PlayerController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CubeActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitGameUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASingleGameLogicActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASingleGameLogicActor::StaticClass,
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
	IMPLEMENT_CLASS(ASingleGameLogicActor, 2733822235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleGameLogicActor(Z_Construct_UClass_ASingleGameLogicActor, &ASingleGameLogicActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ASingleGameLogicActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleGameLogicActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

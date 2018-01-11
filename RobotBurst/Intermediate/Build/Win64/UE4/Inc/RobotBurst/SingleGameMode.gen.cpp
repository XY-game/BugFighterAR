// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SingleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleGameMode() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameMode_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameMode();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameLogicActor_NoRegister();
// End Cross Module References
	void ASingleGameMode::StaticRegisterNativesASingleGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASingleGameMode_NoRegister()
	{
		return ASingleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASingleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SingleGameMode.h" },
				{ "ModuleRelativePath", "SingleGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLogic_MetaData[] = {
				{ "ModuleRelativePath", "SingleGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameLogic = { UE4CodeGen_Private::EPropertyClass::Class, "GameLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(ASingleGameMode, GameLogic), Z_Construct_UClass_ASingleGameLogicActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameLogic_MetaData, ARRAY_COUNT(NewProp_GameLogic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameLogic,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASingleGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASingleGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingleGameMode, 900062325);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleGameMode(Z_Construct_UClass_ASingleGameMode, &ASingleGameMode::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ASingleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

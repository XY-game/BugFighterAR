// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RobotBurstGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotBurstGameModeBase() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ARobotBurstGameModeBase_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ARobotBurstGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void ARobotBurstGameModeBase::StaticRegisterNativesARobotBurstGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARobotBurstGameModeBase_NoRegister()
	{
		return ARobotBurstGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ARobotBurstGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "RobotBurstGameModeBase.h" },
				{ "ModuleRelativePath", "RobotBurstGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARobotBurstGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARobotBurstGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotBurstGameModeBase, 2575499996);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotBurstGameModeBase(Z_Construct_UClass_ARobotBurstGameModeBase, &ARobotBurstGameModeBase::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ARobotBurstGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotBurstGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

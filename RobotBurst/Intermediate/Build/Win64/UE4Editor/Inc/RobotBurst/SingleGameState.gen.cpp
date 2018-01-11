// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SingleGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleGameState() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameState_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameState();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameState();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void ASingleGameState::StaticRegisterNativesASingleGameState()
	{
	}
	UClass* Z_Construct_UClass_ASingleGameState_NoRegister()
	{
		return ASingleGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ASingleGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABaseGameState,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SingleGameState.h" },
				{ "ModuleRelativePath", "SingleGameState.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASingleGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASingleGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(ASingleGameState, 1673543830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleGameState(Z_Construct_UClass_ASingleGameState, &ASingleGameState::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ASingleGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameState() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameState_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UClass* Z_Construct_UClass_ASingleGameLogicActor_NoRegister();
// End Cross Module References
	void ABaseGameState::StaticRegisterNativesABaseGameState()
	{
	}
	UClass* Z_Construct_UClass_ABaseGameState_NoRegister()
	{
		return ABaseGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameState,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BaseGameState.h" },
				{ "ModuleRelativePath", "BaseGameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLogic_MetaData[] = {
				{ "Category", "BaseGameState" },
				{ "ModuleRelativePath", "BaseGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameLogic = { UE4CodeGen_Private::EPropertyClass::Object, "GameLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ABaseGameState, GameLogic), Z_Construct_UClass_ASingleGameLogicActor_NoRegister, METADATA_PARAMS(NewProp_GameLogic_MetaData, ARRAY_COUNT(NewProp_GameLogic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameLogic,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABaseGameState, 2371316962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGameState(Z_Construct_UClass_ABaseGameState, &ABaseGameState::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ABaseGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

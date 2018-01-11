// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UI/PlayerTouchInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTouchInterface() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_UPlayerTouchInterface_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UPlayerTouchInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void UPlayerTouchInterface::StaticRegisterNativesUPlayerTouchInterface()
	{
	}
	UClass* Z_Construct_UClass_UPlayerTouchInterface_NoRegister()
	{
		return UPlayerTouchInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerTouchInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTouchInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/PlayerTouchInterface.h" },
				{ "ModuleRelativePath", "UI/PlayerTouchInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayerTouchInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayerTouchInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UPlayerTouchInterface, 3036775392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerTouchInterface(Z_Construct_UClass_UPlayerTouchInterface, &UPlayerTouchInterface::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UPlayerTouchInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerTouchInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

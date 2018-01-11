// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Characters/ACTHeroCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACTHeroCharacter() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_AACTHeroCharacter_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AACTHeroCharacter();
	ROBOTBURST_API UClass* Z_Construct_UClass_AHeroCharacter();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void AACTHeroCharacter::StaticRegisterNativesAACTHeroCharacter()
	{
	}
	UClass* Z_Construct_UClass_AACTHeroCharacter_NoRegister()
	{
		return AACTHeroCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AACTHeroCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHeroCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Characters/ACTHeroCharacter.h" },
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AACTHeroCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AACTHeroCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AACTHeroCharacter, 3126360926);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACTHeroCharacter(Z_Construct_UClass_AACTHeroCharacter, &AACTHeroCharacter::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AACTHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACTHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

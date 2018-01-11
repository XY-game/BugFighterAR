// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Characters/BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Characters/BaseCharacter.h" },
				{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackComboList_MetaData[] = {
				{ "Category", "CharData" },
				{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAttackComboList = { UE4CodeGen_Private::EPropertyClass::Array, "CharacterAttackComboList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CharacterAttackComboList), METADATA_PARAMS(NewProp_CharacterAttackComboList_MetaData, ARRAY_COUNT(NewProp_CharacterAttackComboList_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackComboList_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackComboList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackAnimMontageMap_MetaData[] = {
				{ "Category", "CharData" },
				{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterAttackAnimMontageMap = { UE4CodeGen_Private::EPropertyClass::Map, "CharacterAttackAnimMontageMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CharacterAttackAnimMontageMap), METADATA_PARAMS(NewProp_CharacterAttackAnimMontageMap_MetaData, ARRAY_COUNT(NewProp_CharacterAttackAnimMontageMap_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackAnimMontageMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackAnimMontageMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAttackAnimMontageMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterAttackAnimMontageMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
				{ "ToolTip", "Current health of this Pawn" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackComboList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackComboList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontageMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontageMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontageMap_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ABaseCharacter, 303577194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

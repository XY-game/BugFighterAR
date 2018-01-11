// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Data/FCharAttackComboRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharAttackComboRowBase() {}
// Cross Module References
	ROBOTBURST_API UScriptStruct* Z_Construct_UScriptStruct_FCharAttackComboRowBase();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharAttackComboRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROBOTBURST_API uint32 Get_Z_Construct_UScriptStruct_FCharAttackComboRowBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharAttackComboRowBase, Z_Construct_UPackage__Script_RobotBurst(), TEXT("CharAttackComboRowBase"), sizeof(FCharAttackComboRowBase), Get_Z_Construct_UScriptStruct_FCharAttackComboRowBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharAttackComboRowBase(FCharAttackComboRowBase::StaticStruct, TEXT("/Script/RobotBurst"), TEXT("CharAttackComboRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackComboRowBase
{
	FScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackComboRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharAttackComboRowBase")),new UScriptStruct::TCppStructOps<FCharAttackComboRowBase>);
	}
} ScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackComboRowBase;
	UScriptStruct* Z_Construct_UScriptStruct_FCharAttackComboRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharAttackComboRowBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharAttackComboRowBase"), sizeof(FCharAttackComboRowBase), Get_Z_Construct_UScriptStruct_FCharAttackComboRowBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Data/FCharAttackComboRowBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharAttackComboRowBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackComboList_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackComboRowBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAttackComboList = { UE4CodeGen_Private::EPropertyClass::Array, "CharacterAttackComboList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackComboRowBase, CharacterAttackComboList), METADATA_PARAMS(NewProp_CharacterAttackComboList_MetaData, ARRAY_COUNT(NewProp_CharacterAttackComboList_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackComboList_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackComboList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackComboRowBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroName = { UE4CodeGen_Private::EPropertyClass::Name, "HeroName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackComboRowBase, HeroName), METADATA_PARAMS(NewProp_HeroName_MetaData, ARRAY_COUNT(NewProp_HeroName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackComboList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackComboList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CharAttackComboRowBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCharAttackComboRowBase),
				alignof(FCharAttackComboRowBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharAttackComboRowBase_CRC() { return 1701839528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

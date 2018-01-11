// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Data/FCharAttackAnimTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharAttackAnimTableRow() {}
// Cross Module References
	ROBOTBURST_API UScriptStruct* Z_Construct_UScriptStruct_FCharAttackAnimTableRow();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharAttackAnimTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROBOTBURST_API uint32 Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharAttackAnimTableRow, Z_Construct_UPackage__Script_RobotBurst(), TEXT("CharAttackAnimTableRow"), sizeof(FCharAttackAnimTableRow), Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharAttackAnimTableRow(FCharAttackAnimTableRow::StaticStruct, TEXT("/Script/RobotBurst"), TEXT("CharAttackAnimTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackAnimTableRow
{
	FScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackAnimTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharAttackAnimTableRow")),new UScriptStruct::TCppStructOps<FCharAttackAnimTableRow>);
	}
} ScriptStruct_RobotBurst_StaticRegisterNativesFCharAttackAnimTableRow;
	UScriptStruct* Z_Construct_UScriptStruct_FCharAttackAnimTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharAttackAnimTableRow"), sizeof(FCharAttackAnimTableRow), Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharAttackAnimTableRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackAnimMontagePath_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterAttackAnimMontagePath = { UE4CodeGen_Private::EPropertyClass::Map, "CharacterAttackAnimMontagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackAnimTableRow, CharacterAttackAnimMontagePath), METADATA_PARAMS(NewProp_CharacterAttackAnimMontagePath_MetaData, ARRAY_COUNT(NewProp_CharacterAttackAnimMontagePath_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackAnimMontagePath_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackAnimMontagePath_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackAnimMontagePath_ValueProp = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackAnimMontagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroName = { UE4CodeGen_Private::EPropertyClass::Name, "HeroName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackAnimTableRow, HeroName), METADATA_PARAMS(NewProp_HeroName_MetaData, ARRAY_COUNT(NewProp_HeroName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontagePath_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontagePath_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CharAttackAnimTableRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCharAttackAnimTableRow),
				alignof(FCharAttackAnimTableRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC() { return 735539282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

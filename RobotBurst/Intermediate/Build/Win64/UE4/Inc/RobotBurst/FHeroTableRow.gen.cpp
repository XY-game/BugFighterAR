// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Data/FHeroTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFHeroTableRow() {}
// Cross Module References
	ROBOTBURST_API UScriptStruct* Z_Construct_UScriptStruct_FHeroTableRow();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ROBOTBURST_API UEnum* Z_Construct_UEnum_RobotBurst_EHeroType();
// End Cross Module References
class UScriptStruct* FHeroTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROBOTBURST_API uint32 Get_Z_Construct_UScriptStruct_FHeroTableRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroTableRow, Z_Construct_UPackage__Script_RobotBurst(), TEXT("HeroTableRow"), sizeof(FHeroTableRow), Get_Z_Construct_UScriptStruct_FHeroTableRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeroTableRow(FHeroTableRow::StaticStruct, TEXT("/Script/RobotBurst"), TEXT("HeroTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_RobotBurst_StaticRegisterNativesFHeroTableRow
{
	FScriptStruct_RobotBurst_StaticRegisterNativesFHeroTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeroTableRow")),new UScriptStruct::TCppStructOps<FHeroTableRow>);
	}
} ScriptStruct_RobotBurst_StaticRegisterNativesFHeroTableRow;
	UScriptStruct* Z_Construct_UScriptStruct_FHeroTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeroTableRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeroTableRow"), sizeof(FHeroTableRow), Get_Z_Construct_UScriptStruct_FHeroTableRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Data/FHeroTableRow.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroTableRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroActorPath_MetaData[] = {
				{ "Category", "Hero" },
				{ "ModuleRelativePath", "Data/FHeroTableRow.h" },
				{ "ToolTip", "Icon to use for Achivement" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroActorPath = { UE4CodeGen_Private::EPropertyClass::Name, "HeroActorPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHeroTableRow, HeroActorPath), METADATA_PARAMS(NewProp_HeroActorPath_MetaData, ARRAY_COUNT(NewProp_HeroActorPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroType_MetaData[] = {
				{ "Category", "Hero" },
				{ "ModuleRelativePath", "Data/FHeroTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeroType = { UE4CodeGen_Private::EPropertyClass::Byte, "HeroType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHeroTableRow, HeroType), Z_Construct_UEnum_RobotBurst_EHeroType, METADATA_PARAMS(NewProp_HeroType_MetaData, ARRAY_COUNT(NewProp_HeroType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[] = {
				{ "Category", "Hero" },
				{ "ModuleRelativePath", "Data/FHeroTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroName = { UE4CodeGen_Private::EPropertyClass::Name, "HeroName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FHeroTableRow, HeroName), METADATA_PARAMS(NewProp_HeroName_MetaData, ARRAY_COUNT(NewProp_HeroName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroID_MetaData[] = {
				{ "Category", "Hero" },
				{ "ModuleRelativePath", "Data/FHeroTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeroID = { UE4CodeGen_Private::EPropertyClass::Int, "HeroID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHeroTableRow, HeroID), METADATA_PARAMS(NewProp_HeroID_MetaData, ARRAY_COUNT(NewProp_HeroID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroActorPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeroID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HeroTableRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FHeroTableRow),
				alignof(FHeroTableRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeroTableRow_CRC() { return 1448474134U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

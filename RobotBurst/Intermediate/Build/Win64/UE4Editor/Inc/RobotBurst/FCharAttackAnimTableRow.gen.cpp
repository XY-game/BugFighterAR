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
	ROBOTBURST_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInfo();
	ROBOTBURST_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInfoAdpter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInfos_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimInfos = { UE4CodeGen_Private::EPropertyClass::Map, "AnimInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackAnimTableRow, AnimInfos), METADATA_PARAMS(NewProp_AnimInfos_MetaData, ARRAY_COUNT(NewProp_AnimInfos_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimInfos_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AnimInfos_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimInfos_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FAnimInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[] = {
				{ "Category", "Anim" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroName = { UE4CodeGen_Private::EPropertyClass::Name, "HeroName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCharAttackAnimTableRow, HeroName), METADATA_PARAMS(NewProp_HeroName_MetaData, ARRAY_COUNT(NewProp_HeroName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInfos_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInfos_ValueProp,
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
	uint32 Get_Z_Construct_UScriptStruct_FCharAttackAnimTableRow_CRC() { return 3073375621U; }
class UScriptStruct* FAnimInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROBOTBURST_API uint32 Get_Z_Construct_UScriptStruct_FAnimInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInfo, Z_Construct_UPackage__Script_RobotBurst(), TEXT("AnimInfo"), sizeof(FAnimInfo), Get_Z_Construct_UScriptStruct_FAnimInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInfo(FAnimInfo::StaticStruct, TEXT("/Script/RobotBurst"), TEXT("AnimInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfo
{
	FScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInfo")),new UScriptStruct::TCppStructOps<FAnimInfo>);
	}
} ScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInfo"), sizeof(FAnimInfo), Get_Z_Construct_UScriptStruct_FAnimInfo_CRC(), false);
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
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDamageTime_MetaData[] = {
				{ "Category", "AnimInfo" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDamageTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimDamageTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfo, AnimDamageTime), METADATA_PARAMS(NewProp_AnimDamageTime_MetaData, ARRAY_COUNT(NewProp_AnimDamageTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndSpacing_MetaData[] = {
				{ "Category", "AnimInfo" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "AnimEndSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfo, AnimEndSpacing), METADATA_PARAMS(NewProp_AnimEndSpacing_MetaData, ARRAY_COUNT(NewProp_AnimEndSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartSpacing_MetaData[] = {
				{ "Category", "AnimInfo" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "AnimStartSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfo, AnimStartSpacing), METADATA_PARAMS(NewProp_AnimStartSpacing_MetaData, ARRAY_COUNT(NewProp_AnimStartSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackAnimMontagePath_MetaData[] = {
				{ "Category", "AnimInfo" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttackAnimMontagePath = { UE4CodeGen_Private::EPropertyClass::Name, "CharacterAttackAnimMontagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfo, CharacterAttackAnimMontagePath), METADATA_PARAMS(NewProp_CharacterAttackAnimMontagePath_MetaData, ARRAY_COUNT(NewProp_CharacterAttackAnimMontagePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimDamageTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimEndSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimStartSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontagePath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimInfo),
				alignof(FAnimInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInfo_CRC() { return 1876087276U; }
class UScriptStruct* FAnimInfoAdpter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROBOTBURST_API uint32 Get_Z_Construct_UScriptStruct_FAnimInfoAdpter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInfoAdpter, Z_Construct_UPackage__Script_RobotBurst(), TEXT("AnimInfoAdpter"), sizeof(FAnimInfoAdpter), Get_Z_Construct_UScriptStruct_FAnimInfoAdpter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInfoAdpter(FAnimInfoAdpter::StaticStruct, TEXT("/Script/RobotBurst"), TEXT("AnimInfoAdpter"), false, nullptr, nullptr);
static struct FScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfoAdpter
{
	FScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfoAdpter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInfoAdpter")),new UScriptStruct::TCppStructOps<FAnimInfoAdpter>);
	}
} ScriptStruct_RobotBurst_StaticRegisterNativesFAnimInfoAdpter;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInfoAdpter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInfoAdpter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInfoAdpter"), sizeof(FAnimInfoAdpter), Get_Z_Construct_UScriptStruct_FAnimInfoAdpter_CRC(), false);
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
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInfoAdpter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDamageTime_MetaData[] = {
				{ "Category", "AnimInfoAdpter" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDamageTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimDamageTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfoAdpter, AnimDamageTime), METADATA_PARAMS(NewProp_AnimDamageTime_MetaData, ARRAY_COUNT(NewProp_AnimDamageTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndSpacing_MetaData[] = {
				{ "Category", "AnimInfoAdpter" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "AnimEndSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfoAdpter, AnimEndSpacing), METADATA_PARAMS(NewProp_AnimEndSpacing_MetaData, ARRAY_COUNT(NewProp_AnimEndSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartSpacing_MetaData[] = {
				{ "Category", "AnimInfoAdpter" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "AnimStartSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfoAdpter, AnimStartSpacing), METADATA_PARAMS(NewProp_AnimStartSpacing_MetaData, ARRAY_COUNT(NewProp_AnimStartSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttackAnimMontage_MetaData[] = {
				{ "Category", "AnimInfoAdpter" },
				{ "ModuleRelativePath", "Data/FCharAttackAnimTableRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAttackAnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterAttackAnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimInfoAdpter, CharacterAttackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_CharacterAttackAnimMontage_MetaData, ARRAY_COUNT(NewProp_CharacterAttackAnimMontage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimDamageTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimEndSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimStartSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAttackAnimMontage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimInfoAdpter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimInfoAdpter),
				alignof(FAnimInfoAdpter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInfoAdpter_CRC() { return 2964550428U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

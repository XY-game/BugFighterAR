// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLogic/GameAssetManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAssetManagerActor() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_AGameAssetManagerActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AGameAssetManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AGameAssetManagerActor_EmptyBPForCAssetMap();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AGameAssetManagerActor_LoadBPForCAssetMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AGameAssetManagerActor_RemoveBPForCAssetMap();
// End Cross Module References
	void AGameAssetManagerActor::StaticRegisterNativesAGameAssetManagerActor()
	{
		UClass* Class = AGameAssetManagerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EmptyBPForCAssetMap", (Native)&AGameAssetManagerActor::execEmptyBPForCAssetMap },
			{ "LoadBPForCAssetMap", (Native)&AGameAssetManagerActor::execLoadBPForCAssetMap },
			{ "RemoveBPForCAssetMap", (Native)&AGameAssetManagerActor::execRemoveBPForCAssetMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameAssetManagerActor_EmptyBPForCAssetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/GameAssetManagerActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameAssetManagerActor, "EmptyBPForCAssetMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameAssetManagerActor_LoadBPForCAssetMap()
	{
		struct GameAssetManagerActor_eventLoadBPForCAssetMap_Parms
		{
			FString AssetPath;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameAssetManagerActor_eventLoadBPForCAssetMap_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath = { UE4CodeGen_Private::EPropertyClass::Str, "AssetPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameAssetManagerActor_eventLoadBPForCAssetMap_Parms, AssetPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/GameAssetManagerActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameAssetManagerActor, "LoadBPForCAssetMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GameAssetManagerActor_eventLoadBPForCAssetMap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameAssetManagerActor_RemoveBPForCAssetMap()
	{
		struct GameAssetManagerActor_eventRemoveBPForCAssetMap_Parms
		{
			FString AssetPath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath = { UE4CodeGen_Private::EPropertyClass::Str, "AssetPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameAssetManagerActor_eventRemoveBPForCAssetMap_Parms, AssetPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/GameAssetManagerActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameAssetManagerActor, "RemoveBPForCAssetMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GameAssetManagerActor_eventRemoveBPForCAssetMap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameAssetManagerActor_NoRegister()
	{
		return AGameAssetManagerActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameAssetManagerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameAssetManagerActor_EmptyBPForCAssetMap, "EmptyBPForCAssetMap" }, // 3028410312
				{ &Z_Construct_UFunction_AGameAssetManagerActor_LoadBPForCAssetMap, "LoadBPForCAssetMap" }, // 1816013721
				{ &Z_Construct_UFunction_AGameAssetManagerActor_RemoveBPForCAssetMap, "RemoveBPForCAssetMap" }, // 242102756
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameLogic/GameAssetManagerActor.h" },
				{ "ModuleRelativePath", "GameLogic/GameAssetManagerActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPForCAssetMap_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/GameAssetManagerActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_BPForCAssetMap = { UE4CodeGen_Private::EPropertyClass::Map, "BPForCAssetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameAssetManagerActor, BPForCAssetMap), METADATA_PARAMS(NewProp_BPForCAssetMap_MetaData, ARRAY_COUNT(NewProp_BPForCAssetMap_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPForCAssetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "BPForCAssetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BPForCAssetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "BPForCAssetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BPForCAssetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BPForCAssetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BPForCAssetMap_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameAssetManagerActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameAssetManagerActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGameAssetManagerActor, 4092539635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameAssetManagerActor(Z_Construct_UClass_AGameAssetManagerActor, &AGameAssetManagerActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AGameAssetManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameAssetManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

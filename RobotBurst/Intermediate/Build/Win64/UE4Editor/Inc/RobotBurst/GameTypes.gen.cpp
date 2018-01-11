// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameTypes() {}
// Cross Module References
	ROBOTBURST_API UEnum* Z_Construct_UEnum_RobotBurst_EHeroType();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UEnum* Z_Construct_UEnum_RobotBurst_EGameplayState();
	ROBOTBURST_API UEnum* Z_Construct_UEnum_RobotBurst_EGameKey();
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameTypes_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EHeroType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RobotBurst_EHeroType, Z_Construct_UPackage__Script_RobotBurst(), TEXT("EHeroType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeroType(EHeroType_StaticEnum, TEXT("/Script/RobotBurst"), TEXT("EHeroType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RobotBurst_EHeroType_CRC() { return 1226710837U; }
	UEnum* Z_Construct_UEnum_RobotBurst_EHeroType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeroType"), 0, Get_Z_Construct_UEnum_RobotBurst_EHeroType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeroType::ACT", (int64)EHeroType::ACT },
				{ "EHeroType::RPG", (int64)EHeroType::RPG },
				{ "EHeroType::MOBA", (int64)EHeroType::MOBA },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RobotBurst,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHeroType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EHeroType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RobotBurst_EGameplayState, Z_Construct_UPackage__Script_RobotBurst(), TEXT("EGameplayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayState(EGameplayState_StaticEnum, TEXT("/Script/RobotBurst"), TEXT("EGameplayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RobotBurst_EGameplayState_CRC() { return 3890577908U; }
	UEnum* Z_Construct_UEnum_RobotBurst_EGameplayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayState"), 0, Get_Z_Construct_UEnum_RobotBurst_EGameplayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayState::Waiting", (int64)EGameplayState::Waiting },
				{ "EGameplayState::Playing", (int64)EGameplayState::Playing },
				{ "EGameplayState::Finished", (int64)EGameplayState::Finished },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RobotBurst,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameplayState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RobotBurst_EGameKey, Z_Construct_UPackage__Script_RobotBurst(), TEXT("EGameKey"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameKey(EGameKey_StaticEnum, TEXT("/Script/RobotBurst"), TEXT("EGameKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RobotBurst_EGameKey_CRC() { return 2952967126U; }
	UEnum* Z_Construct_UEnum_RobotBurst_EGameKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RobotBurst();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameKey"), 0, Get_Z_Construct_UEnum_RobotBurst_EGameKey_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameKey::Tap", (int64)EGameKey::Tap },
				{ "EGameKey::Hold", (int64)EGameKey::Hold },
				{ "EGameKey::Swipe", (int64)EGameKey::Swipe },
				{ "EGameKey::SwipeTwoPoints", (int64)EGameKey::SwipeTwoPoints },
				{ "EGameKey::Pinch", (int64)EGameKey::Pinch },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RobotBurst,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameKey::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGameTypes::StaticRegisterNativesUGameTypes()
	{
	}
	UClass* Z_Construct_UClass_UGameTypes_NoRegister()
	{
		return UGameTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameTypes.h" },
				{ "ModuleRelativePath", "GameTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameTypes::StaticClass,
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
	IMPLEMENT_CLASS(UGameTypes, 1077816495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameTypes(Z_Construct_UClass_UGameTypes, &UGameTypes::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UGameTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

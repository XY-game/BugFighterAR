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
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AACTHeroCharacter_Attack();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackDamageTime();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackEnd();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackSpacing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void AACTHeroCharacter::StaticRegisterNativesAACTHeroCharacter()
	{
		UClass* Class = AACTHeroCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", (Native)&AACTHeroCharacter::execAttack },
			{ "RefreshAttackDamageTime", (Native)&AACTHeroCharacter::execRefreshAttackDamageTime },
			{ "RefreshAttackEnd", (Native)&AACTHeroCharacter::execRefreshAttackEnd },
			{ "RefreshAttackSpacing", (Native)&AACTHeroCharacter::execRefreshAttackSpacing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AACTHeroCharacter_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AACTHeroCharacter, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackDamageTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AACTHeroCharacter, "RefreshAttackDamageTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AACTHeroCharacter, "RefreshAttackEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AACTHeroCharacter, "RefreshAttackSpacing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AACTHeroCharacter_Attack, "Attack" }, // 2323905403
				{ &Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackDamageTime, "RefreshAttackDamageTime" }, // 2198826077
				{ &Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackEnd, "RefreshAttackEnd" }, // 3944499847
				{ &Z_Construct_UFunction_AACTHeroCharacter_RefreshAttackSpacing, "RefreshAttackSpacing" }, // 2440255253
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Characters/ACTHeroCharacter.h" },
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttackSpacing_MetaData[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			auto NewProp_IsAttackSpacing_SetBit = [](void* Obj){ ((AACTHeroCharacter*)Obj)->IsAttackSpacing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttackSpacing = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAttackSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AACTHeroCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsAttackSpacing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsAttackSpacing_MetaData, ARRAY_COUNT(NewProp_IsAttackSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageTimer_MetaData[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDamageTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackDamageTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AACTHeroCharacter, AttackDamageTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_AttackDamageTimer_MetaData, ARRAY_COUNT(NewProp_AttackDamageTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackEndTimer_MetaData[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackEndTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackEndTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AACTHeroCharacter, AttackEndTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_AttackEndTimer_MetaData, ARRAY_COUNT(NewProp_AttackEndTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpacingTimer_MetaData[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackSpacingTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackSpacingTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AACTHeroCharacter, AttackSpacingTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_AttackSpacingTimer_MetaData, ARRAY_COUNT(NewProp_AttackSpacingTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextAttackCombNum_MetaData[] = {
				{ "ModuleRelativePath", "Characters/ACTHeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NextAttackCombNum = { UE4CodeGen_Private::EPropertyClass::Int, "NextAttackCombNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AACTHeroCharacter, NextAttackCombNum), METADATA_PARAMS(NewProp_NextAttackCombNum_MetaData, ARRAY_COUNT(NewProp_NextAttackCombNum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAttackSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackDamageTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackEndTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackSpacingTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextAttackCombNum,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AACTHeroCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AACTHeroCharacter::StaticClass,
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
	IMPLEMENT_CLASS(AACTHeroCharacter, 1195750296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACTHeroCharacter(Z_Construct_UClass_AACTHeroCharacter, &AACTHeroCharacter::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AACTHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACTHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

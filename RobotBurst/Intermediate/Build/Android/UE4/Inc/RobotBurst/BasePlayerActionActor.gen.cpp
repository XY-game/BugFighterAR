// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLogic/Action/BasePlayerActionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerActionActor() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_ABasePlayerActionActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABasePlayerActionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABasePlayerActionActor_JoystickMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_ABasePlayerActionActor_TapPressed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameLogicActor_NoRegister();
// End Cross Module References
	void ABasePlayerActionActor::StaticRegisterNativesABasePlayerActionActor()
	{
		UClass* Class = ABasePlayerActionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JoystickMove", (Native)&ABasePlayerActionActor::execJoystickMove },
			{ "TapPressed", (Native)&ABasePlayerActionActor::execTapPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABasePlayerActionActor_JoystickMove()
	{
		struct BasePlayerActionActor_eventJoystickMove_Parms
		{
			FVector2D Movement;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Struct, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BasePlayerActionActor_eventJoystickMove_Parms, Movement), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/Action/BasePlayerActionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerActionActor, "JoystickMove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820400, sizeof(BasePlayerActionActor_eventJoystickMove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABasePlayerActionActor_TapPressed()
	{
		struct BasePlayerActionActor_eventTapPressed_Parms
		{
			FHitResult Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Struct, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(BasePlayerActionActor_eventTapPressed_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/Action/BasePlayerActionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerActionActor, "TapPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(BasePlayerActionActor_eventTapPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlayerActionActor_NoRegister()
	{
		return ABasePlayerActionActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABasePlayerActionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABasePlayerActionActor_JoystickMove, "JoystickMove" }, // 307593415
				{ &Z_Construct_UFunction_ABasePlayerActionActor_TapPressed, "TapPressed" }, // 2521105359
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameLogic/Action/BasePlayerActionActor.h" },
				{ "ModuleRelativePath", "GameLogic/Action/BasePlayerActionActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLogic_MetaData[] = {
				{ "ModuleRelativePath", "GameLogic/Action/BasePlayerActionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameLogic = { UE4CodeGen_Private::EPropertyClass::Object, "GameLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABasePlayerActionActor, GameLogic), Z_Construct_UClass_ABaseGameLogicActor_NoRegister, METADATA_PARAMS(NewProp_GameLogic_MetaData, ARRAY_COUNT(NewProp_GameLogic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameLogic,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABasePlayerActionActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABasePlayerActionActor::StaticClass,
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
	IMPLEMENT_CLASS(ABasePlayerActionActor, 689588540);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayerActionActor(Z_Construct_UClass_ABasePlayerActionActor, &ABasePlayerActionActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("ABasePlayerActionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerActionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

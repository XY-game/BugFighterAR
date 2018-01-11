// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLogic/Action/ACTPlayerActionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACTPlayerActionActor() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_AACTPlayerActionActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AACTPlayerActionActor();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABasePlayerActionActor();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AACTPlayerActionActor_JoystickMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void AACTPlayerActionActor::StaticRegisterNativesAACTPlayerActionActor()
	{
		UClass* Class = AACTPlayerActionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JoystickMove", (Native)&AACTPlayerActionActor::execJoystickMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AACTPlayerActionActor_JoystickMove()
	{
		struct ACTPlayerActionActor_eventJoystickMove_Parms
		{
			FVector2D Movement;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Struct, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ACTPlayerActionActor_eventJoystickMove_Parms, Movement), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameLogic/Action/ACTPlayerActionActor.h" },
				{ "ToolTip", "UFUNCTION()\nvoid TapPressed(FHitResult Result) override;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AACTPlayerActionActor, "JoystickMove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(ACTPlayerActionActor_eventJoystickMove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AACTPlayerActionActor_NoRegister()
	{
		return AACTPlayerActionActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AACTPlayerActionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABasePlayerActionActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AACTPlayerActionActor_JoystickMove, "JoystickMove" }, // 1121147524
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameLogic/Action/ACTPlayerActionActor.h" },
				{ "ModuleRelativePath", "GameLogic/Action/ACTPlayerActionActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AACTPlayerActionActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AACTPlayerActionActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AACTPlayerActionActor, 3839825686);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACTPlayerActionActor(Z_Construct_UClass_AACTPlayerActionActor, &AACTPlayerActionActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AACTPlayerActionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACTPlayerActionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

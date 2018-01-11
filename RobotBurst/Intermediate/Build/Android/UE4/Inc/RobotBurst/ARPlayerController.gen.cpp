// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ARPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPlayerController() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlayerController_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UClass* Z_Construct_UClass_UPlayerTouchInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ROBOTBURST_API UClass* Z_Construct_UClass_UARInput_NoRegister();
// End Cross Module References
	void AARPlayerController::StaticRegisterNativesAARPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AARPlayerController_NoRegister()
	{
		return AARPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AARPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ARPlayerController.h" },
				{ "ModuleRelativePath", "ARPlayerController.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyStick_MetaData[] = {
				{ "Category", "Joystick" },
				{ "ModuleRelativePath", "ARPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoyStick = { UE4CodeGen_Private::EPropertyClass::Object, "JoyStick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AARPlayerController, JoyStick), Z_Construct_UClass_UPlayerTouchInterface_NoRegister, METADATA_PARAMS(NewProp_JoyStick_MetaData, ARRAY_COUNT(NewProp_JoyStick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyStickBP_MetaData[] = {
				{ "Category", "Joystick" },
				{ "ModuleRelativePath", "ARPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_JoyStickBP = { UE4CodeGen_Private::EPropertyClass::Class, "JoyStickBP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AARPlayerController, JoyStickBP), Z_Construct_UClass_UPlayerTouchInterface_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_JoyStickBP_MetaData, ARRAY_COUNT(NewProp_JoyStickBP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[] = {
				{ "ModuleRelativePath", "ARPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInput = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AARPlayerController, MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MovementInput_MetaData, ARRAY_COUNT(NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputHandler_MetaData[] = {
				{ "ModuleRelativePath", "ARPlayerController.h" },
				{ "ToolTip", "Custom input handler." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputHandler = { UE4CodeGen_Private::EPropertyClass::Object, "InputHandler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AARPlayerController, InputHandler), Z_Construct_UClass_UARInput_NoRegister, METADATA_PARAMS(NewProp_InputHandler_MetaData, ARRAY_COUNT(NewProp_InputHandler_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoyStick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoyStickBP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputHandler,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AARPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AARPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPlayerController, 3604289750);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPlayerController(Z_Construct_UClass_AARPlayerController, &AARPlayerController::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AARPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

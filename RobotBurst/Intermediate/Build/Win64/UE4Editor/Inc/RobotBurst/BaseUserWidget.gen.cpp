// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UI/BaseUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidget() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UClass* Z_Construct_UClass_ABaseGameLogicActor_NoRegister();
// End Cross Module References
	void UBaseUserWidget::StaticRegisterNativesUBaseUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister()
	{
		return UBaseUserWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/BaseUserWidget.h" },
				{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLogic_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameLogic = { UE4CodeGen_Private::EPropertyClass::Object, "GameLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBaseUserWidget, GameLogic), Z_Construct_UClass_ABaseGameLogicActor_NoRegister, METADATA_PARAMS(NewProp_GameLogic_MetaData, ARRAY_COUNT(NewProp_GameLogic_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameLogic,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBaseUserWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBaseUserWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UBaseUserWidget, 2355606034);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseUserWidget(Z_Construct_UClass_UBaseUserWidget, &UBaseUserWidget::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UBaseUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UI/ACTGameInputWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACTGameInputWidget() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_UACTGameInputWidget_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UACTGameInputWidget();
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameInputWidget();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void UACTGameInputWidget::StaticRegisterNativesUACTGameInputWidget()
	{
	}
	UClass* Z_Construct_UClass_UACTGameInputWidget_NoRegister()
	{
		return UACTGameInputWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UACTGameInputWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInputWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/ACTGameInputWidget.h" },
				{ "ModuleRelativePath", "UI/ACTGameInputWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UACTGameInputWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UACTGameInputWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UACTGameInputWidget, 3777750972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACTGameInputWidget(Z_Construct_UClass_UACTGameInputWidget, &UACTGameInputWidget::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UACTGameInputWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACTGameInputWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

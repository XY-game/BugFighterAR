// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UI/GameInputWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInputWidget() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameInputWidget_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UGameInputWidget();
	ROBOTBURST_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
// End Cross Module References
	void UGameInputWidget::StaticRegisterNativesUGameInputWidget()
	{
	}
	UClass* Z_Construct_UClass_UGameInputWidget_NoRegister()
	{
		return UGameInputWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameInputWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UI/GameInputWidget.h" },
				{ "ModuleRelativePath", "UI/GameInputWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameInputWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameInputWidget::StaticClass,
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
	IMPLEMENT_CLASS(UGameInputWidget, 3075581519);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInputWidget(Z_Construct_UClass_UGameInputWidget, &UGameInputWidget::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UGameInputWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInputWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

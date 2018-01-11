// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/TouchRipple__pf2792847264.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchRipple__pf2792847264() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__GetIsRippleEffectFinished__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__IsRippleVisible__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Tick__pf();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__TriggerRipple__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	static FName NAME_UTouchRipple_C__pf2792847264_bpf__Construct__pf = FName(TEXT("Construct"));
	void UTouchRipple_C__pf2792847264::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTouchRipple_C__pf2792847264_bpf__Construct__pf),NULL);
	}
	static FName NAME_UTouchRipple_C__pf2792847264_bpf__Tick__pf = FName(TEXT("Tick"));
	void UTouchRipple_C__pf2792847264::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		TouchRipple_C__pf2792847264_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UTouchRipple_C__pf2792847264_bpf__Tick__pf),&Parms);
	}
	void UTouchRipple_C__pf2792847264::StaticRegisterNativesUTouchRipple_C__pf2792847264()
	{
		UClass* Class = UTouchRipple_C__pf2792847264::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", (Native)&UTouchRipple_C__pf2792847264::execbpf__Construct__pf },
			{ "GetIsRippleEffectFinished", (Native)&UTouchRipple_C__pf2792847264::execbpf__GetIsRippleEffectFinished__pf },
			{ "IsRippleVisible", (Native)&UTouchRipple_C__pf2792847264::execbpf__IsRippleVisible__pf },
			{ "Tick", (Native)&UTouchRipple_C__pf2792847264::execbpf__Tick__pf },
			{ "TriggerRipple", (Native)&UTouchRipple_C__pf2792847264::execbpf__TriggerRipple__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTouchRipple_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "Construct" },
				{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchRipple_C__pf2792847264, "Construct", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__GetIsRippleEffectFinished__pf()
	{
		struct TouchRipple_C__pf2792847264_eventbpf__GetIsRippleEffectFinished__pf_Parms
		{
			bool bpp__IsFinished__pf;
		};
		UObject* Outer = Z_Construct_UClass_UTouchRipple_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetIsRippleEffectFinished") ));
		if (!ReturnFunction)
		{
			auto NewProp_bpp__IsFinished__pf_SetBit = [](void* Obj){ ((TouchRipple_C__pf2792847264_eventbpf__GetIsRippleEffectFinished__pf_Parms*)Obj)->bpp__IsFinished__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__IsFinished__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__IsFinished__pf", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TouchRipple_C__pf2792847264_eventbpf__GetIsRippleEffectFinished__pf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__IsFinished__pf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__IsFinished__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "GetIsRippleEffectFinished" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchRipple_C__pf2792847264, "GetIsRippleEffectFinished", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04420400, sizeof(TouchRipple_C__pf2792847264_eventbpf__GetIsRippleEffectFinished__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__IsRippleVisible__pf()
	{
		struct TouchRipple_C__pf2792847264_eventbpf__IsRippleVisible__pf_Parms
		{
			bool bpp__IsVisible__pf;
		};
		UObject* Outer = Z_Construct_UClass_UTouchRipple_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("IsRippleVisible") ));
		if (!ReturnFunction)
		{
			auto NewProp_bpp__IsVisible__pf_SetBit = [](void* Obj){ ((TouchRipple_C__pf2792847264_eventbpf__IsRippleVisible__pf_Parms*)Obj)->bpp__IsVisible__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__IsVisible__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__IsVisible__pf", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TouchRipple_C__pf2792847264_eventbpf__IsRippleVisible__pf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__IsVisible__pf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__IsVisible__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "IsRippleVisible" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchRipple_C__pf2792847264, "IsRippleVisible", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04420400, sizeof(TouchRipple_C__pf2792847264_eventbpf__IsRippleVisible__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTouchRipple_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Tick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__InDeltaTime__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TouchRipple_C__pf2792847264_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__MyGeometry__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TouchRipple_C__pf2792847264_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__InDeltaTime__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__MyGeometry__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "Tick" },
				{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchRipple_C__pf2792847264, "Tick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, sizeof(TouchRipple_C__pf2792847264_eventbpf__Tick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__TriggerRipple__pf()
	{
		struct TouchRipple_C__pf2792847264_eventbpf__TriggerRipple__pf_Parms
		{
			FVector2D bpp__TouchPosition__pf;
		};
		UObject* Outer = Z_Construct_UClass_UTouchRipple_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("TriggerRipple") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__TouchPosition__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__TouchPosition__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TouchRipple_C__pf2792847264_eventbpf__TriggerRipple__pf_Parms, bpp__TouchPosition__pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__TouchPosition__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "TriggerRipple" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchRipple_C__pf2792847264, "TriggerRipple", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04820400, sizeof(TouchRipple_C__pf2792847264_eventbpf__TriggerRipple__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister()
	{
		return UTouchRipple_C__pf2792847264::StaticClass();
	}
	UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Project/Blueprints/TouchRipple"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TouchRipple_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Construct__pf, "Construct" }, // 470988166
				{ &Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__GetIsRippleEffectFinished__pf, "GetIsRippleEffectFinished" }, // 1458911197
				{ &Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__IsRippleVisible__pf, "IsRippleVisible" }, // 2482971553
				{ &Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__Tick__pf, "Tick" }, // 2040910682
				{ &Z_Construct_UFunction_UTouchRipple_C__pf2792847264_bpf__TriggerRipple__pf, "TriggerRipple" }, // 3303463353
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "TouchRipple__pf2792847264.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "TouchRipple_C" },
				{ "ReplaceConverted", "/Game/Project/Blueprints/TouchRipple.TouchRipple_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_InDeltaTime", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UTouchRipple_C__pf2792847264, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_Event_MyGeometry", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UTouchRipple_C__pf2792847264, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "CallFunc_GetIsRippleEffectFinished_IsFinished" },
			};
#endif
			auto NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf_SetBit = [](void* Obj){ ((UTouchRipple_C__pf2792847264*)Obj)->b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "CallFunc_GetIsRippleEffectFinished_IsFinished", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTouchRipple_C__pf2792847264), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RippleEffectTriggered__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Ripple Effect Triggered" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "RippleEffectTriggered" },
			};
#endif
			auto NewProp_bpv__RippleEffectTriggered__pf_SetBit = [](void* Obj){ ((UTouchRipple_C__pf2792847264*)Obj)->bpv__RippleEffectTriggered__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RippleEffectTriggered__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "RippleEffectTriggered", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTouchRipple_C__pf2792847264), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__RippleEffectTriggered__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__RippleEffectTriggered__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RippleEffectTriggered__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Ripple__pf_MetaData[] = {
				{ "Category", "TouchRipple" },
				{ "DisplayName", "Ripple" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "Ripple" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Ripple__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Ripple", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UTouchRipple_C__pf2792847264, bpv__Ripple__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__Ripple__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Ripple__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TouchRippleEffect__pf_MetaData[] = {
				{ "Category", "Animations" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TouchRipple__pf2792847264.h" },
				{ "OverrideNativeName", "TouchRippleEffect" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TouchRippleEffect__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TouchRippleEffect", RF_Public|RF_Transient, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UTouchRipple_C__pf2792847264, bpv__TouchRippleEffect__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(NewProp_bpv__TouchRippleEffect__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TouchRippleEffect__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_InDeltaTime__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_MyGeometry__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RippleEffectTriggered__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Ripple__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TouchRippleEffect__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTouchRipple_C__pf2792847264>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTouchRipple_C__pf2792847264::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UTouchRipple_C__pf2792847264, TEXT("TouchRipple_C"), 2026750639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchRipple_C__pf2792847264(Z_Construct_UClass_UTouchRipple_C__pf2792847264, &UTouchRipple_C__pf2792847264::StaticClass, TEXT("/Game/Project/Blueprints/TouchRipple"), TEXT("TouchRipple_C"), true, TEXT("/Game/Project/Blueprints/TouchRipple"), TEXT("/Game/Project/Blueprints/TouchRipple.TouchRipple_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchRipple_C__pf2792847264);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

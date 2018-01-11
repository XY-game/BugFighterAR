// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/TouchEffectComponent__pf2792847264.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchEffectComponent__pf2792847264() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__GetUnusedRipple__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ShowTouchEffect__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_UTouchEffectComponent_C__pf2792847264_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void UTouchEffectComponent_C__pf2792847264::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTouchEffectComponent_C__pf2792847264_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void UTouchEffectComponent_C__pf2792847264::StaticRegisterNativesUTouchEffectComponent_C__pf2792847264()
	{
		UClass* Class = UTouchEffectComponent_C__pf2792847264::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnusedRipple", (Native)&UTouchEffectComponent_C__pf2792847264::execbpf__GetUnusedRipple__pf },
			{ "ReceiveBeginPlay", (Native)&UTouchEffectComponent_C__pf2792847264::execbpf__ReceiveBeginPlay__pf },
			{ "ShowTouchEffect", (Native)&UTouchEffectComponent_C__pf2792847264::execbpf__ShowTouchEffect__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__GetUnusedRipple__pf()
	{
		struct TouchEffectComponent_C__pf2792847264_eventbpf__GetUnusedRipple__pf_Parms
		{
			UTouchRipple_C__pf2792847264* bpp__RippleInstance__pf;
		};
		UObject* Outer = Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetUnusedRipple") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__RippleInstance__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__RippleInstance__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__RippleInstance__pf", RF_Public|RF_Transient, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(TouchEffectComponent_C__pf2792847264_eventbpf__GetUnusedRipple__pf_Parms, bpp__RippleInstance__pf), Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister, METADATA_PARAMS(NewProp_bpp__RippleInstance__pf_MetaData, ARRAY_COUNT(NewProp_bpp__RippleInstance__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__RippleInstance__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "GetUnusedRipple" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264, "GetUnusedRipple", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04420400, sizeof(TouchEffectComponent_C__pf2792847264_eventbpf__GetUnusedRipple__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Begin Play" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its Owner's BeginPlay on Actor BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ShowTouchEffect__pf()
	{
		struct TouchEffectComponent_C__pf2792847264_eventbpf__ShowTouchEffect__pf_Parms
		{
			FVector2D bpp__ScreenPosition__pf;
		};
		UObject* Outer = Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ShowTouchEffect") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ScreenPosition__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__ScreenPosition__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TouchEffectComponent_C__pf2792847264_eventbpf__ShowTouchEffect__pf_Parms, bpp__ScreenPosition__pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ScreenPosition__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "ShowTouchEffect" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264, "ShowTouchEffect", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04820400, sizeof(TouchEffectComponent_C__pf2792847264_eventbpf__ShowTouchEffect__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264_NoRegister()
	{
		return UTouchEffectComponent_C__pf2792847264::StaticClass();
	}
	UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Project/Blueprints/TouchEffectComponent"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TouchEffectComponent_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__GetUnusedRipple__pf, "GetUnusedRipple" }, // 2169195409
				{ &Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 758604427
				{ &Z_Construct_UFunction_UTouchEffectComponent_C__pf2792847264_bpf__ShowTouchEffect__pf, "ShowTouchEffect" }, // 459786655
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "TouchEffectComponent__pf2792847264.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "TouchEffectComponent_C" },
				{ "ReplaceConverted", "/Game/Project/Blueprints/TouchEffectComponent.TouchEffectComponent_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "Temp_int_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UTouchEffectComponent_C__pf2792847264, b0l__Temp_int_Variable__pf), METADATA_PARAMS(NewProp_b0l__Temp_int_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Create_ReturnValue__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "CallFunc_Create_ReturnValue" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Create_ReturnValue__pf = { UE4CodeGen_Private::EPropertyClass::Object, "CallFunc_Create_ReturnValue", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UTouchEffectComponent_C__pf2792847264, b0l__CallFunc_Create_ReturnValue__pf), Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister, METADATA_PARAMS(NewProp_b0l__CallFunc_Create_ReturnValue__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_Create_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RippleEffectPool__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Ripple Effect Pool" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TouchEffectComponent__pf2792847264.h" },
				{ "OverrideNativeName", "RippleEffectPool" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__RippleEffectPool__pf = { UE4CodeGen_Private::EPropertyClass::Array, "RippleEffectPool", RF_Public|RF_Transient, 0x001000800001000d, 1, nullptr, STRUCT_OFFSET(UTouchEffectComponent_C__pf2792847264, bpv__RippleEffectPool__pf), METADATA_PARAMS(NewProp_bpv__RippleEffectPool__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RippleEffectPool__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RippleEffectPool__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "bpv__RippleEffectPool__pf", RF_Public|RF_Transient, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UTouchRipple_C__pf2792847264_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_int_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_Create_ReturnValue__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RippleEffectPool__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RippleEffectPool__pf_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTouchEffectComponent_C__pf2792847264>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTouchEffectComponent_C__pf2792847264::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A00080u,
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
	IMPLEMENT_DYNAMIC_CLASS(UTouchEffectComponent_C__pf2792847264, TEXT("TouchEffectComponent_C"), 262635667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchEffectComponent_C__pf2792847264(Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264, &UTouchEffectComponent_C__pf2792847264::StaticClass, TEXT("/Game/Project/Blueprints/TouchEffectComponent"), TEXT("TouchEffectComponent_C"), true, TEXT("/Game/Project/Blueprints/TouchEffectComponent"), TEXT("/Game/Project/Blueprints/TouchEffectComponent.TouchEffectComponent_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchEffectComponent_C__pf2792847264);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

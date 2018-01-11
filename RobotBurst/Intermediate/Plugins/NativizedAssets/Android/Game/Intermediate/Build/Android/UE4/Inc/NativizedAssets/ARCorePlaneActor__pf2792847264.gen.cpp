// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ARCorePlaneActor__pf2792847264.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCorePlaneActor__pf2792847264() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlaneActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__GetMainPlaneWorldTransform__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__UserConstructionScript__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FName NAME_AARCorePlaneActor_C__pf2792847264_bpf__GetMainPlaneWorldTransform__pf = FName(TEXT("GetMainPlaneWorldTransform"));
	FTransform AARCorePlaneActor_C__pf2792847264::eventbpf__GetMainPlaneWorldTransform__pf()
	{
		ARCorePlaneActor_C__pf2792847264_eventbpf__GetMainPlaneWorldTransform__pf_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AARCorePlaneActor_C__pf2792847264_bpf__GetMainPlaneWorldTransform__pf),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AARCorePlaneActor_C__pf2792847264::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AARCorePlaneActor_C__pf2792847264::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		ARCorePlaneActor_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AARCorePlaneActor_C__pf2792847264_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AARCorePlaneActor_C__pf2792847264::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARCorePlaneActor_C__pf2792847264_bpf__UserConstructionScript__pf),NULL);
	}
	void AARCorePlaneActor_C__pf2792847264::StaticRegisterNativesAARCorePlaneActor_C__pf2792847264()
	{
		UClass* Class = AARCorePlaneActor_C__pf2792847264::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainPlaneWorldTransform", (Native)&AARCorePlaneActor_C__pf2792847264::execbpf__GetMainPlaneWorldTransform__pf },
			{ "ReceiveBeginPlay", (Native)&AARCorePlaneActor_C__pf2792847264::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", (Native)&AARCorePlaneActor_C__pf2792847264::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", (Native)&AARCorePlaneActor_C__pf2792847264::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__GetMainPlaneWorldTransform__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetMainPlaneWorldTransform") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARCorePlaneActor_C__pf2792847264_eventbpf__GetMainPlaneWorldTransform__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "GetMainPlaneWorldTransform" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264, "GetMainPlaneWorldTransform", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04820C01, sizeof(ARCorePlaneActor_C__pf2792847264_eventbpf__GetMainPlaneWorldTransform__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARCorePlaneActor_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(ARCorePlaneActor_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264_NoRegister()
	{
		return AARCorePlaneActor_C__pf2792847264::StaticClass();
	}
	UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Project/Blueprints/ARCorePlaneActor"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ARCorePlaneActor_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AARPlaneActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__GetMainPlaneWorldTransform__pf, "GetMainPlaneWorldTransform" }, // 2192573635
				{ &Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2042182273
				{ &Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__ReceiveTick__pf, "ReceiveTick" }, // 921645542
				{ &Z_Construct_UFunction_AARCorePlaneActor_C__pf2792847264_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 4122239104
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARCorePlaneActor__pf2792847264.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ARCorePlaneActor_C" },
				{ "ReplaceConverted", "/Game/Project/Blueprints/ARCorePlaneActor.ARCorePlaneActor_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((AARCorePlaneActor_C__pf2792847264*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AARCorePlaneActor_C__pf2792847264), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AARCorePlaneActor_C__pf2792847264, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlaneColorSwitches__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plane Color Switches" },
				{ "ModuleRelativePath", "Public/ARCorePlaneActor__pf2792847264.h" },
				{ "OverrideNativeName", "PlaneColorSwitches" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__PlaneColorSwitches__pf = { UE4CodeGen_Private::EPropertyClass::Array, "PlaneColorSwitches", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AARCorePlaneActor_C__pf2792847264, bpv__PlaneColorSwitches__pf), METADATA_PARAMS(NewProp_bpv__PlaneColorSwitches__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlaneColorSwitches__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PlaneColorSwitches__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "bpv__PlaneColorSwitches__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlaneColorSwitches__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlaneColorSwitches__pf_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AARCorePlaneActor_C__pf2792847264>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AARCorePlaneActor_C__pf2792847264::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_DYNAMIC_CLASS(AARCorePlaneActor_C__pf2792847264, TEXT("ARCorePlaneActor_C"), 958268707);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARCorePlaneActor_C__pf2792847264(Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264, &AARCorePlaneActor_C__pf2792847264::StaticClass, TEXT("/Game/Project/Blueprints/ARCorePlaneActor"), TEXT("ARCorePlaneActor_C"), true, TEXT("/Game/Project/Blueprints/ARCorePlaneActor"), TEXT("/Game/Project/Blueprints/ARCorePlaneActor.ARCorePlaneActor_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCorePlaneActor_C__pf2792847264);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

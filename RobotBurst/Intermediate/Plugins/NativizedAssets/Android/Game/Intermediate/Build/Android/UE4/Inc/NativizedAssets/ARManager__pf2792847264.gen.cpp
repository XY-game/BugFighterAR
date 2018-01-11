// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ARManager__pf2792847264.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARManager__pf2792847264() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARManager_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARManager_C__pf2792847264();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARManager();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__GetMainARWorldCenterTransform__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__IsARPlanesActive__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UpdatePlaneActors__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UserConstructionScript__pf();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlaneActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePointCloudRendererComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();
// End Cross Module References
	static FName NAME_AARManager_C__pf2792847264_bpf__GetMainARWorldCenterTransform__pf = FName(TEXT("GetMainARWorldCenterTransform"));
	FTransform AARManager_C__pf2792847264::eventbpf__GetMainARWorldCenterTransform__pf()
	{
		ARManager_C__pf2792847264_eventbpf__GetMainARWorldCenterTransform__pf_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AARManager_C__pf2792847264_bpf__GetMainARWorldCenterTransform__pf),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AARManager_C__pf2792847264_bpf__IsARPlanesActive__pf = FName(TEXT("IsARPlanesActive"));
	bool AARManager_C__pf2792847264::eventbpf__IsARPlanesActive__pf()
	{
		ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AARManager_C__pf2792847264_bpf__IsARPlanesActive__pf),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AARManager_C__pf2792847264_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AARManager_C__pf2792847264::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		ARManager_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AARManager_C__pf2792847264_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AARManager_C__pf2792847264_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AARManager_C__pf2792847264::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARManager_C__pf2792847264_bpf__UserConstructionScript__pf),NULL);
	}
	void AARManager_C__pf2792847264::StaticRegisterNativesAARManager_C__pf2792847264()
	{
		UClass* Class = AARManager_C__pf2792847264::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainARWorldCenterTransform", (Native)&AARManager_C__pf2792847264::execbpf__GetMainARWorldCenterTransform__pf },
			{ "IsARPlanesActive", (Native)&AARManager_C__pf2792847264::execbpf__IsARPlanesActive__pf },
			{ "ReceiveTick", (Native)&AARManager_C__pf2792847264::execbpf__ReceiveTick__pf },
			{ "UpdatePlaneActors", (Native)&AARManager_C__pf2792847264::execbpf__UpdatePlaneActors__pf },
			{ "UserConstructionScript", (Native)&AARManager_C__pf2792847264::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__GetMainARWorldCenterTransform__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARManager_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetMainARWorldCenterTransform") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARManager_C__pf2792847264_eventbpf__GetMainARWorldCenterTransform__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ARData" },
				{ "CppFromBpEvent", "" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "GetMainARWorldCenterTransform" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARManager_C__pf2792847264, "GetMainARWorldCenterTransform", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04820C01, sizeof(ARManager_C__pf2792847264_eventbpf__GetMainARWorldCenterTransform__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__IsARPlanesActive__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARManager_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("IsARPlanesActive") ));
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ARData" },
				{ "CppFromBpEvent", "" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "IsARPlanesActive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARManager_C__pf2792847264, "IsARPlanesActive", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, sizeof(ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARManager_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARManager_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARManager_C__pf2792847264, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(ARManager_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UpdatePlaneActors__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARManager_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UpdatePlaneActors") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "UpdatePlaneActors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARManager_C__pf2792847264, "UpdatePlaneActors", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARManager_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARManager_C__pf2792847264, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARManager_C__pf2792847264_NoRegister()
	{
		return AARManager_C__pf2792847264::StaticClass();
	}
	UClass* Z_Construct_UClass_AARManager_C__pf2792847264()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Project/Blueprints/ARManager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ARManager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AARManager,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__GetMainARWorldCenterTransform__pf, "GetMainARWorldCenterTransform" }, // 300698892
				{ &Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__IsARPlanesActive__pf, "IsARPlanesActive" }, // 3121029849
				{ &Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1822909174
				{ &Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UpdatePlaneActors__pf, "UpdatePlaneActors" }, // 2332076329
				{ &Z_Construct_UFunction_AARManager_C__pf2792847264_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2718508420
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARManager__pf2792847264.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ARManager_C" },
				{ "ReplaceConverted", "/Game/Project/Blueprints/ARManager.ARManager_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlaneActorMap__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plane Actor Map" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "PlaneActorMap" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_bpv__PlaneActorMap__pf = { UE4CodeGen_Private::EPropertyClass::Map, "PlaneActorMap", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__PlaneActorMap__pf), METADATA_PARAMS(NewProp_bpv__PlaneActorMap__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlaneActorMap__pf_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PlaneActorMap__pf_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "bpv__PlaneActorMap__pf_Key", RF_Public|RF_Transient, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlaneActorMap__pf_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "bpv__PlaneActorMap__pf", RF_Public|RF_Transient, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_AARPlaneActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CameraImageUV__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Camera Image UV" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "CameraImageUV" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__CameraImageUV__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CameraImageUV", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__CameraImageUV__pf), METADATA_PARAMS(NewProp_bpv__CameraImageUV__pf_MetaData, ARRAY_COUNT(NewProp_bpv__CameraImageUV__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__CameraImageUV__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "bpv__CameraImageUV__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GoogleARCorePointCloudRenderer__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "GoogleARCorePointCloudRenderer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GoogleARCorePointCloudRenderer__pf = { UE4CodeGen_Private::EPropertyClass::Object, "GoogleARCorePointCloudRenderer", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__GoogleARCorePointCloudRenderer__pf), Z_Construct_UClass_UGoogleARCorePointCloudRendererComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__GoogleARCorePointCloudRenderer__pf_MetaData, ARRAY_COUNT(NewProp_bpv__GoogleARCorePointCloudRenderer__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TouchEffectComponent__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "TouchEffectComponent" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TouchEffectComponent__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TouchEffectComponent", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__TouchEffectComponent__pf), Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264_NoRegister, METADATA_PARAMS(NewProp_bpv__TouchEffectComponent__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TouchEffectComponent__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ApplicationLifecycle__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARManager__pf2792847264.h" },
				{ "OverrideNativeName", "ApplicationLifecycle" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ApplicationLifecycle__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ApplicationLifecycle", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARManager_C__pf2792847264, bpv__ApplicationLifecycle__pf), Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ApplicationLifecycle__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ApplicationLifecycle__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlaneActorMap__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlaneActorMap__pf_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlaneActorMap__pf_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CameraImageUV__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CameraImageUV__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__GoogleARCorePointCloudRenderer__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TouchEffectComponent__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ApplicationLifecycle__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AARManager_C__pf2792847264>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AARManager_C__pf2792847264::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AARManager_C__pf2792847264, TEXT("ARManager_C"), 900175176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARManager_C__pf2792847264(Z_Construct_UClass_AARManager_C__pf2792847264, &AARManager_C__pf2792847264::StaticClass, TEXT("/Game/Project/Blueprints/ARManager"), TEXT("ARManager_C"), true, TEXT("/Game/Project/Blueprints/ARManager"), TEXT("/Game/Project/Blueprints/ARManager.ARManager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARManager_C__pf2792847264);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

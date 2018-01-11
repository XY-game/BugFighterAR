// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AR/ARPlaneActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPlaneActor() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlaneActor_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_AARPlaneActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransformImpl();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePlane_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AARPlaneActor_GetMainPlaneWorldTransform = FName(TEXT("GetMainPlaneWorldTransform"));
	FTransform AARPlaneActor::GetMainPlaneWorldTransform()
	{
		ARPlaneActor_eventGetMainPlaneWorldTransform_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AARPlaneActor_GetMainPlaneWorldTransform),&Parms);
		return Parms.ReturnValue;
	}
	void AARPlaneActor::StaticRegisterNativesAARPlaneActor()
	{
		UClass* Class = AARPlaneActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainPlaneWorldTransformImpl", (Native)&AARPlaneActor::execGetMainPlaneWorldTransformImpl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneActor_eventGetMainPlaneWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPlaneActor, "GetMainPlaneWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(ARPlaneActor_eventGetMainPlaneWorldTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransformImpl()
	{
		struct ARPlaneActor_eventGetMainPlaneWorldTransformImpl_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneActor_eventGetMainPlaneWorldTransformImpl_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GoogleARCorePlaneActor" },
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPlaneActor, "GetMainPlaneWorldTransformImpl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ARPlaneActor_eventGetMainPlaneWorldTransformImpl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARPlaneActor_NoRegister()
	{
		return AARPlaneActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AARPlaneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransform, "GetMainPlaneWorldTransform" }, // 492841174
				{ &Z_Construct_UFunction_AARPlaneActor_GetMainPlaneWorldTransformImpl, "GetMainPlaneWorldTransformImpl" }, // 2602033211
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AR/ARPlaneActor.h" },
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeFeatheringDistance_MetaData[] = {
				{ "Category", "GoogleARCorePlaneActor" },
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
				{ "ToolTip", "The feathering distance for the polygon edge. Default to 10 cm" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeFeatheringDistance = { UE4CodeGen_Private::EPropertyClass::Float, "EdgeFeatheringDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AARPlaneActor, EdgeFeatheringDistance), METADATA_PARAMS(NewProp_EdgeFeatheringDistance_MetaData, ARRAY_COUNT(NewProp_EdgeFeatheringDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARCorePlaneObject_MetaData[] = {
				{ "Category", "GoogleARCorePlaneActor" },
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
				{ "ToolTip", "When set to true, the actor will remove the ARAnchor object from the current tracking session when the Actor gets destroyed." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARCorePlaneObject = { UE4CodeGen_Private::EPropertyClass::Object, "ARCorePlaneObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AARPlaneActor, ARCorePlaneObject), Z_Construct_UClass_UGoogleARCorePlane_NoRegister, METADATA_PARAMS(NewProp_ARCorePlaneObject_MetaData, ARRAY_COUNT(NewProp_ARCorePlaneObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonMeshComponent_MetaData[] = {
				{ "Category", "GoogleARCorePlaneActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AR/ARPlaneActor.h" },
				{ "ToolTip", "The procedural mesh component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PlanePolygonMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AARPlaneActor, PlanePolygonMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PlanePolygonMeshComponent_MetaData, ARRAY_COUNT(NewProp_PlanePolygonMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdgeFeatheringDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ARCorePlaneObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanePolygonMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AARPlaneActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AARPlaneActor::StaticClass,
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
	IMPLEMENT_CLASS(AARPlaneActor, 690860253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPlaneActor(Z_Construct_UClass_AARPlaneActor, &AARPlaneActor::StaticClass, TEXT("/Script/RobotBurst"), TEXT("AARPlaneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPlaneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

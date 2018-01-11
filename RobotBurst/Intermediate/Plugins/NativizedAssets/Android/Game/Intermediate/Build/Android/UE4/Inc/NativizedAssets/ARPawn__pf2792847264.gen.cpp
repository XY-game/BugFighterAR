// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ARPawn__pf2792847264.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPawn__pf2792847264() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARPawn_C__pf2792847264_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AARPawn_C__pf2792847264();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AARPawn_C__pf2792847264_bpf__UserConstructionScript__pf();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AARPawn_C__pf2792847264_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AARPawn_C__pf2792847264::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARPawn_C__pf2792847264_bpf__UserConstructionScript__pf),NULL);
	}
	void AARPawn_C__pf2792847264::StaticRegisterNativesAARPawn_C__pf2792847264()
	{
		UClass* Class = AARPawn_C__pf2792847264::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", (Native)&AARPawn_C__pf2792847264::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AARPawn_C__pf2792847264_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AARPawn_C__pf2792847264();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/ARPawn__pf2792847264.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPawn_C__pf2792847264, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARPawn_C__pf2792847264_NoRegister()
	{
		return AARPawn_C__pf2792847264::StaticClass();
	}
	UClass* Z_Construct_UClass_AARPawn_C__pf2792847264()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Project/Blueprints/ARPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ARPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AARPawn_C__pf2792847264_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2931215084
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ARPawn__pf2792847264.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ARPawn__pf2792847264.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ARPawn_C" },
				{ "ReplaceConverted", "/Game/Project/Blueprints/ARPawn.ARPawn_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARPawn__pf2792847264.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARPawn_C__pf2792847264, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARPawn__pf2792847264.h" },
				{ "OverrideNativeName", "Camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AARPawn_C__pf2792847264, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__Camera__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Camera__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Camera__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AARPawn_C__pf2792847264>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AARPawn_C__pf2792847264::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_DYNAMIC_CLASS(AARPawn_C__pf2792847264, TEXT("ARPawn_C"), 722657412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPawn_C__pf2792847264(Z_Construct_UClass_AARPawn_C__pf2792847264, &AARPawn_C__pf2792847264::StaticClass, TEXT("/Game/Project/Blueprints/ARPawn"), TEXT("ARPawn_C"), true, TEXT("/Game/Project/Blueprints/ARPawn"), TEXT("/Game/Project/Blueprints/ARPawn.ARPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPawn_C__pf2792847264);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

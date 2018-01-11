// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AR/ARDataInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARDataInterface() {}
// Cross Module References
	ROBOTBURST_API UClass* Z_Construct_UClass_UARDataInterface_NoRegister();
	ROBOTBURST_API UClass* Z_Construct_UClass_UARDataInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RobotBurst();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_UARDataInterface_GetMainARWorldCenterTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ROBOTBURST_API UFunction* Z_Construct_UFunction_UARDataInterface_IsARPlanesActive();
// End Cross Module References
	TArray<FTransform> IARDataInterface::GetMainARWorldCenterTransform()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMainARWorldCenterTransform instead.");
		ARDataInterface_eventGetMainARWorldCenterTransform_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IARDataInterface::IsARPlanesActive()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsARPlanesActive instead.");
		ARDataInterface_eventIsARPlanesActive_Parms Parms;
		return Parms.ReturnValue;
	}
	void UARDataInterface::StaticRegisterNativesUARDataInterface()
	{
	}
	UFunction* Z_Construct_UFunction_UARDataInterface_GetMainARWorldCenterTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARDataInterface_eventGetMainARWorldCenterTransform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ARData" },
				{ "ModuleRelativePath", "AR/ARDataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDataInterface, "GetMainARWorldCenterTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ARDataInterface_eventGetMainARWorldCenterTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARDataInterface_IsARPlanesActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ARDataInterface_eventIsARPlanesActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARDataInterface_eventIsARPlanesActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ARData" },
				{ "ModuleRelativePath", "AR/ARDataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDataInterface, "IsARPlanesActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ARDataInterface_eventIsARPlanesActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARDataInterface_NoRegister()
	{
		return UARDataInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UARDataInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_RobotBurst,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARDataInterface_GetMainARWorldCenterTransform, "GetMainARWorldCenterTransform" }, // 1023156996
				{ &Z_Construct_UFunction_UARDataInterface_IsARPlanesActive, "IsARPlanesActive" }, // 393810328
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "AR/ARDataInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IARDataInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARDataInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UARDataInterface, 3336439874);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARDataInterface(Z_Construct_UClass_UARDataInterface, &UARDataInterface::StaticClass, TEXT("/Script/RobotBurst"), TEXT("UARDataInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARDataInterface);
	static FName NAME_UARDataInterface_GetMainARWorldCenterTransform = FName(TEXT("GetMainARWorldCenterTransform"));
	TArray<FTransform> IARDataInterface::Execute_GetMainARWorldCenterTransform(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UARDataInterface::StaticClass()));
		ARDataInterface_eventGetMainARWorldCenterTransform_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UARDataInterface_GetMainARWorldCenterTransform);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UARDataInterface_IsARPlanesActive = FName(TEXT("IsARPlanesActive"));
	bool IARDataInterface::Execute_IsARPlanesActive(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UARDataInterface::StaticClass()));
		ARDataInterface_eventIsARPlanesActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UARDataInterface_IsARPlanesActive);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

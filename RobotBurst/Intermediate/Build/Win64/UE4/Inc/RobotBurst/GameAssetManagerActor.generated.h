// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ROBOTBURST_GameAssetManagerActor_generated_h
#error "GameAssetManagerActor.generated.h already included, missing '#pragma once' in GameAssetManagerActor.h"
#endif
#define ROBOTBURST_GameAssetManagerActor_generated_h

#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEmptyBPForCAssetMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EmptyBPForCAssetMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBPForCAssetMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBPForCAssetMap(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBPForCAssetMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=this->LoadBPForCAssetMap(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEmptyBPForCAssetMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EmptyBPForCAssetMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBPForCAssetMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBPForCAssetMap(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBPForCAssetMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=this->LoadBPForCAssetMap(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameAssetManagerActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AGameAssetManagerActor(); \
public: \
	DECLARE_CLASS(AGameAssetManagerActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AGameAssetManagerActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameAssetManagerActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AGameAssetManagerActor(); \
public: \
	DECLARE_CLASS(AGameAssetManagerActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AGameAssetManagerActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameAssetManagerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameAssetManagerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameAssetManagerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameAssetManagerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameAssetManagerActor(AGameAssetManagerActor&&); \
	NO_API AGameAssetManagerActor(const AGameAssetManagerActor&); \
public:


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameAssetManagerActor(AGameAssetManagerActor&&); \
	NO_API AGameAssetManagerActor(const AGameAssetManagerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameAssetManagerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameAssetManagerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameAssetManagerActor)


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_9_PROLOG
#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_INCLASS \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_GameLogic_GameAssetManagerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

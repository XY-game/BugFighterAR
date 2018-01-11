// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_BaseGameMode_generated_h
#error "BaseGameMode.generated.h already included, missing '#pragma once' in BaseGameMode.h"
#endif
#define ROBOTBURST_BaseGameMode_generated_h

#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGameMode(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameMode(); \
public: \
	DECLARE_CLASS(ABaseGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGameMode(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameMode(); \
public: \
	DECLARE_CLASS(ABaseGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameMode(ABaseGameMode&&); \
	NO_API ABaseGameMode(const ABaseGameMode&); \
public:


#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameMode(ABaseGameMode&&); \
	NO_API ABaseGameMode(const ABaseGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameMode)


#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_BaseGameMode_h_12_PROLOG
#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_INCLASS \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_BaseGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_BaseGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

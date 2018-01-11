// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_BaseGameState_generated_h
#error "BaseGameState.generated.h already included, missing '#pragma once' in BaseGameState.h"
#endif
#define ROBOTBURST_BaseGameState_generated_h

#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGameState(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameState(); \
public: \
	DECLARE_CLASS(ABaseGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABaseGameState(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameState(); \
public: \
	DECLARE_CLASS(ABaseGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameState(ABaseGameState&&); \
	NO_API ABaseGameState(const ABaseGameState&); \
public:


#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameState(ABaseGameState&&); \
	NO_API ABaseGameState(const ABaseGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameState)


#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_BaseGameState_h_13_PROLOG
#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_INCLASS \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_BaseGameState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_BaseGameState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_BaseGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

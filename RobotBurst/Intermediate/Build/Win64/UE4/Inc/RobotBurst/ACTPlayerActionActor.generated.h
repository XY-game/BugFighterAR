// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef ROBOTBURST_ACTPlayerActionActor_generated_h
#error "ACTPlayerActionActor.generated.h already included, missing '#pragma once' in ACTPlayerActionActor.h"
#endif
#define ROBOTBURST_ACTPlayerActionActor_generated_h

#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoystickMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoystickMove(Z_Param_Movement); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoystickMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoystickMove(Z_Param_Movement); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACTPlayerActionActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AACTPlayerActionActor(); \
public: \
	DECLARE_CLASS(AACTPlayerActionActor, ABasePlayerActionActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AACTPlayerActionActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAACTPlayerActionActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AACTPlayerActionActor(); \
public: \
	DECLARE_CLASS(AACTPlayerActionActor, ABasePlayerActionActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AACTPlayerActionActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACTPlayerActionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACTPlayerActionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACTPlayerActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACTPlayerActionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACTPlayerActionActor(AACTPlayerActionActor&&); \
	NO_API AACTPlayerActionActor(const AACTPlayerActionActor&); \
public:


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACTPlayerActionActor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACTPlayerActionActor(AACTPlayerActionActor&&); \
	NO_API AACTPlayerActionActor(const AACTPlayerActionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACTPlayerActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACTPlayerActionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACTPlayerActionActor)


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_12_PROLOG
#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_INCLASS \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_GameLogic_Action_ACTPlayerActionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

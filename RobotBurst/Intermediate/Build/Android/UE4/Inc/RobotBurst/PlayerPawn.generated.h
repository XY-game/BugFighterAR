// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define ROBOTBURST_PlayerPawn_generated_h

#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_PlayerPawn_h_10_PROLOG
#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_INCLASS \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_PlayerPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

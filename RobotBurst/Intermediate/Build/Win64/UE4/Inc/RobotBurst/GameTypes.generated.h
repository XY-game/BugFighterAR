// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_GameTypes_generated_h
#error "GameTypes.generated.h already included, missing '#pragma once' in GameTypes.h"
#endif
#define ROBOTBURST_GameTypes_generated_h

#define RobotBurst_Source_RobotBurst_GameTypes_h_50_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_GameTypes_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_GameTypes_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameTypes(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_UGameTypes(); \
public: \
	DECLARE_CLASS(UGameTypes, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(UGameTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameTypes_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUGameTypes(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_UGameTypes(); \
public: \
	DECLARE_CLASS(UGameTypes, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(UGameTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameTypes_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameTypes(UGameTypes&&); \
	NO_API UGameTypes(const UGameTypes&); \
public:


#define RobotBurst_Source_RobotBurst_GameTypes_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameTypes(UGameTypes&&); \
	NO_API UGameTypes(const UGameTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameTypes)


#define RobotBurst_Source_RobotBurst_GameTypes_h_50_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_GameTypes_h_47_PROLOG
#define RobotBurst_Source_RobotBurst_GameTypes_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_INCLASS \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_GameTypes_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameTypes_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_GameTypes_h


#define FOREACH_ENUM_EHEROTYPE(op) \
	op(EHeroType::ACT) \
	op(EHeroType::RPG) 
#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGameplayState::Waiting) \
	op(EGameplayState::Playing) 
#define FOREACH_ENUM_EGAMEKEY(op) \
	op(EGameKey::Tap) \
	op(EGameKey::Hold) \
	op(EGameKey::Swipe) \
	op(EGameKey::SwipeTwoPoints) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

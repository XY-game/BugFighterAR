// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_ARManager_generated_h
#error "ARManager.generated.h already included, missing '#pragma once' in ARManager.h"
#endif
#define ROBOTBURST_ARManager_generated_h

#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARManager(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARManager(); \
public: \
	DECLARE_CLASS(AARManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AARManager*>(this); }


#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAARManager(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARManager(); \
public: \
	DECLARE_CLASS(AARManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AARManager*>(this); }


#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARManager(AARManager&&); \
	NO_API AARManager(const AARManager&); \
public:


#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARManager(AARManager&&); \
	NO_API AARManager(const AARManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARManager)


#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_AR_ARManager_h_9_PROLOG
#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_INCLASS \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_AR_ARManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_AR_ARManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_AR_ARManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

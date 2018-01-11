// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ROBOTBURST_ARPlaneActor_generated_h
#error "ARPlaneActor.generated.h already included, missing '#pragma once' in ARPlaneActor.h"
#endif
#define ROBOTBURST_ARPlaneActor_generated_h

#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMainPlaneWorldTransformImpl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetMainPlaneWorldTransformImpl(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMainPlaneWorldTransformImpl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetMainPlaneWorldTransformImpl(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_EVENT_PARMS \
	struct ARPlaneActor_eventGetMainPlaneWorldTransform_Parms \
	{ \
		FTransform ReturnValue; \
	};


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_CALLBACK_WRAPPERS
#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPlaneActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARPlaneActor(); \
public: \
	DECLARE_CLASS(AARPlaneActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARPlaneActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAARPlaneActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARPlaneActor(); \
public: \
	DECLARE_CLASS(AARPlaneActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARPlaneActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPlaneActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPlaneActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlaneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlaneActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlaneActor(AARPlaneActor&&); \
	NO_API AARPlaneActor(const AARPlaneActor&); \
public:


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlaneActor(AARPlaneActor&&); \
	NO_API AARPlaneActor(const AARPlaneActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlaneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlaneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARPlaneActor)


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_9_PROLOG \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_EVENT_PARMS


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_CALLBACK_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_INCLASS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_CALLBACK_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_AR_ARPlaneActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

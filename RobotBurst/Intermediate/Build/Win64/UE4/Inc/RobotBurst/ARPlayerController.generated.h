// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROBOTBURST_ARPlayerController_generated_h
#error "ARPlayerController.generated.h already included, missing '#pragma once' in ARPlayerController.h"
#endif
#define ROBOTBURST_ARPlayerController_generated_h

#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPlayerController(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARPlayerController(); \
public: \
	DECLARE_CLASS(AARPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAARPlayerController(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_AARPlayerController(); \
public: \
	DECLARE_CLASS(AARPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(AARPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlayerController(AARPlayerController&&); \
	NO_API AARPlayerController(const AARPlayerController&); \
public:


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlayerController(AARPlayerController&&); \
	NO_API AARPlayerController(const AARPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPlayerController)


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputHandler() { return STRUCT_OFFSET(AARPlayerController, InputHandler); }


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_16_PROLOG
#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_INCLASS \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_ARPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_ARPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_ARPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

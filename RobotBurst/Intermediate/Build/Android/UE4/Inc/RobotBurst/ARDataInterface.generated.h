// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ROBOTBURST_ARDataInterface_generated_h
#error "ARDataInterface.generated.h already included, missing '#pragma once' in ARDataInterface.h"
#endif
#define ROBOTBURST_ARDataInterface_generated_h

#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_RPC_WRAPPERS
#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_EVENT_PARMS \
	struct ARDataInterface_eventGetMainARWorldCenterTransform_Parms \
	{ \
		TArray<FTransform> ReturnValue; \
	}; \
	struct ARDataInterface_eventIsARPlanesActive_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ARDataInterface_eventIsARPlanesActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_CALLBACK_WRAPPERS
#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROBOTBURST_API UARDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROBOTBURST_API, UARDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDataInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ROBOTBURST_API UARDataInterface(UARDataInterface&&); \
	ROBOTBURST_API UARDataInterface(const UARDataInterface&); \
public:


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROBOTBURST_API UARDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ROBOTBURST_API UARDataInterface(UARDataInterface&&); \
	ROBOTBURST_API UARDataInterface(const UARDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROBOTBURST_API, UARDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDataInterface)


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUARDataInterface(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_UARDataInterface(); \
public: \
	DECLARE_CLASS(UARDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/RobotBurst"), ROBOTBURST_API) \
	DECLARE_SERIALIZER(UARDataInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_GENERATED_UINTERFACE_BODY() \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_GENERATED_UINTERFACE_BODY() \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IARDataInterface() {} \
public: \
	typedef UARDataInterface UClassType; \
	static TArray<FTransform> Execute_GetMainARWorldCenterTransform(UObject* O); \
	static bool Execute_IsARPlanesActive(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IARDataInterface() {} \
public: \
	typedef UARDataInterface UClassType; \
	static TArray<FTransform> Execute_GetMainARWorldCenterTransform(UObject* O); \
	static bool Execute_IsARPlanesActive(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_10_PROLOG \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_EVENT_PARMS


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_CALLBACK_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_CALLBACK_WRAPPERS \
	RobotBurst_Source_RobotBurst_AR_ARDataInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_AR_ARDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

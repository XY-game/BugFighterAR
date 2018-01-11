// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef NATIVIZEDASSETS_ARManager__pf2792847264_generated_h
#error "ARManager__pf2792847264.generated.h already included, missing '#pragma once' in ARManager__pf2792847264.h"
#endif
#define NATIVIZEDASSETS_ARManager__pf2792847264_generated_h

#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetMainARWorldCenterTransform__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->bpf__GetMainARWorldCenterTransform__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IsARPlanesActive__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->bpf__IsARPlanesActive__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatePlaneActors__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatePlaneActors__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetMainARWorldCenterTransform__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->bpf__GetMainARWorldCenterTransform__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IsARPlanesActive__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->bpf__IsARPlanesActive__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatePlaneActors__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatePlaneActors__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_EVENT_PARMS \
	struct ARManager_C__pf2792847264_eventbpf__GetMainARWorldCenterTransform__pf_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ARManager_C__pf2792847264_eventbpf__IsARPlanesActive__pf_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ARManager_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_CALLBACK_WRAPPERS \
	FTransform eventbpf__GetMainARWorldCenterTransform__pf(); \
 \
	bool eventbpf__IsARPlanesActive__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARManager_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AARManager_C__pf2792847264(); \
public: \
	DECLARE_CLASS(AARManager_C__pf2792847264, AARManager, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/ARManager"), NO_API) \
	DECLARE_SERIALIZER(AARManager_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAARManager_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AARManager_C__pf2792847264(); \
public: \
	DECLARE_CLASS(AARManager_C__pf2792847264, AARManager, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/ARManager"), NO_API) \
	DECLARE_SERIALIZER(AARManager_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARManager_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARManager_C__pf2792847264) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARManager_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARManager_C__pf2792847264); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARManager_C__pf2792847264(AARManager_C__pf2792847264&&); \
	NO_API AARManager_C__pf2792847264(const AARManager_C__pf2792847264&); \
public:


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARManager_C__pf2792847264(AARManager_C__pf2792847264&&); \
	NO_API AARManager_C__pf2792847264(const AARManager_C__pf2792847264&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARManager_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARManager_C__pf2792847264); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARManager_C__pf2792847264)


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_11_PROLOG \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_EVENT_PARMS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_RPC_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_INCLASS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_INCLASS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARManager__pf2792847264_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

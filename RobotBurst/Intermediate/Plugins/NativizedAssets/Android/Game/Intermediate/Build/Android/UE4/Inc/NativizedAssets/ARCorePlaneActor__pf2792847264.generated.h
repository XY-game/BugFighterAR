// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef NATIVIZEDASSETS_ARCorePlaneActor__pf2792847264_generated_h
#error "ARCorePlaneActor__pf2792847264.generated.h already included, missing '#pragma once' in ARCorePlaneActor__pf2792847264.h"
#endif
#define NATIVIZEDASSETS_ARCorePlaneActor__pf2792847264_generated_h

#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetMainPlaneWorldTransform__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->bpf__GetMainPlaneWorldTransform__pf(); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetMainPlaneWorldTransform__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->bpf__GetMainPlaneWorldTransform__pf(); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_EVENT_PARMS \
	struct ARCorePlaneActor_C__pf2792847264_eventbpf__GetMainPlaneWorldTransform__pf_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct ARCorePlaneActor_C__pf2792847264_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_CALLBACK_WRAPPERS \
	FTransform eventbpf__GetMainPlaneWorldTransform__pf(); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARCorePlaneActor_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264(); \
public: \
	DECLARE_CLASS(AARCorePlaneActor_C__pf2792847264, AARPlaneActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/ARCorePlaneActor"), NO_API) \
	DECLARE_SERIALIZER(AARCorePlaneActor_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAARCorePlaneActor_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AARCorePlaneActor_C__pf2792847264(); \
public: \
	DECLARE_CLASS(AARCorePlaneActor_C__pf2792847264, AARPlaneActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/ARCorePlaneActor"), NO_API) \
	DECLARE_SERIALIZER(AARCorePlaneActor_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARCorePlaneActor_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARCorePlaneActor_C__pf2792847264) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARCorePlaneActor_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARCorePlaneActor_C__pf2792847264); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARCorePlaneActor_C__pf2792847264(AARCorePlaneActor_C__pf2792847264&&); \
	NO_API AARCorePlaneActor_C__pf2792847264(const AARCorePlaneActor_C__pf2792847264&); \
public:


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARCorePlaneActor_C__pf2792847264(AARCorePlaneActor_C__pf2792847264&&); \
	NO_API AARCorePlaneActor_C__pf2792847264(const AARCorePlaneActor_C__pf2792847264&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARCorePlaneActor_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARCorePlaneActor_C__pf2792847264); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARCorePlaneActor_C__pf2792847264)


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_6_PROLOG \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_EVENT_PARMS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_RPC_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_INCLASS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_INCLASS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h_10_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_ARCorePlaneActor__pf2792847264_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

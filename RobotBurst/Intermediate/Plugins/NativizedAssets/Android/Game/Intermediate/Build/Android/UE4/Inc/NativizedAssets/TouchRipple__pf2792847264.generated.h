// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FGeometry;
#ifdef NATIVIZEDASSETS_TouchRipple__pf2792847264_generated_h
#error "TouchRipple__pf2792847264.generated.h already included, missing '#pragma once' in TouchRipple__pf2792847264.h"
#endif
#define NATIVIZEDASSETS_TouchRipple__pf2792847264_generated_h

#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__IsRippleVisible__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsVisible__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IsRippleVisible__pf(Z_Param_Out_bpp__IsVisible__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetIsRippleEffectFinished__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsFinished__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GetIsRippleEffectFinished__pf(Z_Param_Out_bpp__IsFinished__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TriggerRipple__pf) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_bpp__TouchPosition__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TriggerRipple__pf(Z_Param_bpp__TouchPosition__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Construct__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Tick__pf) \
	{ \
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__InDeltaTime__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__IsRippleVisible__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsVisible__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IsRippleVisible__pf(Z_Param_Out_bpp__IsVisible__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetIsRippleEffectFinished__pf) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsFinished__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GetIsRippleEffectFinished__pf(Z_Param_Out_bpp__IsFinished__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TriggerRipple__pf) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_bpp__TouchPosition__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TriggerRipple__pf(Z_Param_bpp__TouchPosition__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Construct__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Tick__pf) \
	{ \
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__InDeltaTime__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf); \
		P_NATIVE_END; \
	}


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_EVENT_PARMS \
	struct TouchRipple_C__pf2792847264_eventbpf__Tick__pf_Parms \
	{ \
		FGeometry bpp__MyGeometry__pf; \
		float bpp__InDeltaTime__pf; \
	};


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \
 \
	void eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf); \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchRipple_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264(); \
public: \
	DECLARE_CLASS(UTouchRipple_C__pf2792847264, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/TouchRipple"), NO_API) \
	DECLARE_SERIALIZER(UTouchRipple_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTouchRipple_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UTouchRipple_C__pf2792847264(); \
public: \
	DECLARE_CLASS(UTouchRipple_C__pf2792847264, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/TouchRipple"), NO_API) \
	DECLARE_SERIALIZER(UTouchRipple_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchRipple_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchRipple_C__pf2792847264) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchRipple_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchRipple_C__pf2792847264); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchRipple_C__pf2792847264(UTouchRipple_C__pf2792847264&&); \
	NO_API UTouchRipple_C__pf2792847264(const UTouchRipple_C__pf2792847264&); \
public:


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchRipple_C__pf2792847264(UTouchRipple_C__pf2792847264&&); \
	NO_API UTouchRipple_C__pf2792847264(const UTouchRipple_C__pf2792847264&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchRipple_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchRipple_C__pf2792847264); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchRipple_C__pf2792847264)


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_10_PROLOG \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_EVENT_PARMS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_RPC_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_INCLASS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_INCLASS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchRipple__pf2792847264_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTouchRipple_C__pf2792847264;
struct FVector2D;
#ifdef NATIVIZEDASSETS_TouchEffectComponent__pf2792847264_generated_h
#error "TouchEffectComponent__pf2792847264.generated.h already included, missing '#pragma once' in TouchEffectComponent__pf2792847264.h"
#endif
#define NATIVIZEDASSETS_TouchEffectComponent__pf2792847264_generated_h

#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetUnusedRipple__pf) \
	{ \
		P_GET_OBJECT_REF(UTouchRipple_C__pf2792847264,Z_Param_Out_bpp__RippleInstance__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GetUnusedRipple__pf(Z_Param_Out_bpp__RippleInstance__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShowTouchEffect__pf) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_bpp__ScreenPosition__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ShowTouchEffect__pf(Z_Param_bpp__ScreenPosition__pf); \
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


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetUnusedRipple__pf) \
	{ \
		P_GET_OBJECT_REF(UTouchRipple_C__pf2792847264,Z_Param_Out_bpp__RippleInstance__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GetUnusedRipple__pf(Z_Param_Out_bpp__RippleInstance__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShowTouchEffect__pf) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_bpp__ScreenPosition__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ShowTouchEffect__pf(Z_Param_bpp__ScreenPosition__pf); \
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


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_EVENT_PARMS
#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchEffectComponent_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264(); \
public: \
	DECLARE_CLASS(UTouchEffectComponent_C__pf2792847264, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/TouchEffectComponent"), NO_API) \
	DECLARE_SERIALIZER(UTouchEffectComponent_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUTouchEffectComponent_C__pf2792847264(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UTouchEffectComponent_C__pf2792847264(); \
public: \
	DECLARE_CLASS(UTouchEffectComponent_C__pf2792847264, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Project/Blueprints/TouchEffectComponent"), NO_API) \
	DECLARE_SERIALIZER(UTouchEffectComponent_C__pf2792847264) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchEffectComponent_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchEffectComponent_C__pf2792847264) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchEffectComponent_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchEffectComponent_C__pf2792847264); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchEffectComponent_C__pf2792847264(UTouchEffectComponent_C__pf2792847264&&); \
	NO_API UTouchEffectComponent_C__pf2792847264(const UTouchEffectComponent_C__pf2792847264&); \
public:


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchEffectComponent_C__pf2792847264(UTouchEffectComponent_C__pf2792847264&&); \
	NO_API UTouchEffectComponent_C__pf2792847264(const UTouchEffectComponent_C__pf2792847264&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchEffectComponent_C__pf2792847264); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchEffectComponent_C__pf2792847264); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchEffectComponent_C__pf2792847264)


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_7_PROLOG \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_EVENT_PARMS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_RPC_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_INCLASS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_CALLBACK_WRAPPERS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_INCLASS_NO_PURE_DECLS \
	RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h_11_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_TouchEffectComponent__pf2792847264_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

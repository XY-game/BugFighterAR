// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
struct FRotator;
class AHeroCharacter;
#ifdef ROBOTBURST_BaseGameLogicActor_generated_h
#error "BaseGameLogicActor.generated.h already included, missing '#pragma once' in BaseGameLogicActor.h"
#endif
#define ROBOTBURST_BaseGameLogicActor_generated_h

#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_23_DELEGATE \
struct _Script_RobotBurst_eventArScanedEvent_Parms \
{ \
	bool IsScaned; \
}; \
static inline void FArScanedEvent_DelegateWrapper(const FMulticastScriptDelegate& ArScanedEvent, bool IsScaned) \
{ \
	_Script_RobotBurst_eventArScanedEvent_Parms Parms; \
	Parms.IsScaned=IsScaned ? true : false; \
	ArScanedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTapPressed) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TapPressed(Z_Param_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitPlayerAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitPlayerAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitPlayerUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitPlayerUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHero) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitHero(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeroID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeroID(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReleaseLogic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitLogic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatPlayerHero) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeroResPath); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHeroCharacter**)Z_Param__Result=this->CreatPlayerHero(Z_Param_HeroResPath,Z_Param_Location,Z_Param_Rotator); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTapPressed) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TapPressed(Z_Param_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitPlayerAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitPlayerAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitPlayerUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitPlayerUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHero) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitHero(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeroID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeroID(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReleaseLogic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitLogic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatPlayerHero) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeroResPath); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHeroCharacter**)Z_Param__Result=this->CreatPlayerHero(Z_Param_HeroResPath,Z_Param_Location,Z_Param_Rotator); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGameLogicActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameLogicActor(); \
public: \
	DECLARE_CLASS(ABaseGameLogicActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameLogicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesABaseGameLogicActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ABaseGameLogicActor(); \
public: \
	DECLARE_CLASS(ABaseGameLogicActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameLogicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameLogicActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameLogicActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameLogicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameLogicActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameLogicActor(ABaseGameLogicActor&&); \
	NO_API ABaseGameLogicActor(const ABaseGameLogicActor&); \
public:


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameLogicActor(ABaseGameLogicActor&&); \
	NO_API ABaseGameLogicActor(const ABaseGameLogicActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameLogicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameLogicActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGameLogicActor)


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_PRIVATE_PROPERTY_OFFSET
#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_25_PROLOG
#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_INCLASS \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_GameLogic_BaseGameLogicActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

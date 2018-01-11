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
#ifdef ROBOTBURST_SingleGameLogicActor_generated_h
#error "SingleGameLogicActor.generated.h already included, missing '#pragma once' in SingleGameLogicActor.h"
#endif
#define ROBOTBURST_SingleGameLogicActor_generated_h

#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitNavMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitNavMesh(Z_Param_Location); \
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
	} \
 \
	DECLARE_FUNCTION(execInitLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitLogic(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitNavMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitNavMesh(Z_Param_Location); \
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
	} \
 \
	DECLARE_FUNCTION(execInitLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitLogic(); \
		P_NATIVE_END; \
	}


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingleGameLogicActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ASingleGameLogicActor(); \
public: \
	DECLARE_CLASS(ASingleGameLogicActor, ABaseGameLogicActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ASingleGameLogicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASingleGameLogicActor(); \
	friend ROBOTBURST_API class UClass* Z_Construct_UClass_ASingleGameLogicActor(); \
public: \
	DECLARE_CLASS(ASingleGameLogicActor, ABaseGameLogicActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RobotBurst"), NO_API) \
	DECLARE_SERIALIZER(ASingleGameLogicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASingleGameLogicActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingleGameLogicActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleGameLogicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleGameLogicActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleGameLogicActor(ASingleGameLogicActor&&); \
	NO_API ASingleGameLogicActor(const ASingleGameLogicActor&); \
public:


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleGameLogicActor(ASingleGameLogicActor&&); \
	NO_API ASingleGameLogicActor(const ASingleGameLogicActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleGameLogicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleGameLogicActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingleGameLogicActor)


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(ASingleGameLogicActor, PlayerController); }


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_16_PROLOG
#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_RPC_WRAPPERS \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_INCLASS \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_INCLASS_NO_PURE_DECLS \
	RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotBurst_Source_RobotBurst_GameLogic_SingleGameLogicActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

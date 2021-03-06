// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankTurrets_generated_h
#error "TankTurrets.generated.h already included, missing '#pragma once' in TankTurrets.h"
#endif
#define BATTLETANK_TankTurrets_generated_h

#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_RPC_WRAPPERS
#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTurrets(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurrets(); \
public: \
	DECLARE_CLASS(UTankTurrets, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTurrets) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankTurrets(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurrets(); \
public: \
	DECLARE_CLASS(UTankTurrets, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTurrets) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurrets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurrets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurrets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurrets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurrets(UTankTurrets&&); \
	NO_API UTankTurrets(const UTankTurrets&); \
public:


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurrets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurrets(UTankTurrets&&); \
	NO_API UTankTurrets(const UTankTurrets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurrets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurrets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurrets)


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankTurrets, MaxDegreesPerSecond); }


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_12_PROLOG
#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_INCLASS \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankTurrets_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTurrets_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankTurrets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELFBOWLING_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define ELFBOWLING_PlayerPawn_generated_h

#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_RPC_WRAPPERS
#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Marker() { return STRUCT_OFFSET(APlayerPawn, Marker); } \
	FORCEINLINE static uint32 __PPO__ArrowComponent() { return STRUCT_OFFSET(APlayerPawn, ArrowComponent); } \
	FORCEINLINE static uint32 __PPO__BowlingBallClass() { return STRUCT_OFFSET(APlayerPawn, BowlingBallClass); } \
	FORCEINLINE static uint32 __PPO__Music() { return STRUCT_OFFSET(APlayerPawn, Music); } \
	FORCEINLINE static uint32 __PPO__E() { return STRUCT_OFFSET(APlayerPawn, E); }


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_17_PROLOG
#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_RPC_WRAPPERS \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_INCLASS \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElfBowling_Source_ElfBowling_PlayerPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_INCLASS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_PlayerPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElfBowling_Source_ElfBowling_PlayerPawn_h


#define FOREACH_ENUM_EPHASEENUM(op) \
	op(EPhaseEnum::PPower) \
	op(EPhaseEnum::PLaunch) \
	op(EPhaseEnum::PCheck) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

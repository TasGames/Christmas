// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ELFBOWLING_DestroyBall_generated_h
#error "DestroyBall.generated.h already included, missing '#pragma once' in DestroyBall.h"
#endif
#define ELFBOWLING_DestroyBall_generated_h

#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyBall(); \
	friend struct Z_Construct_UClass_ADestroyBall_Statics; \
public: \
	DECLARE_CLASS(ADestroyBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(ADestroyBall)


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADestroyBall(); \
	friend struct Z_Construct_UClass_ADestroyBall_Statics; \
public: \
	DECLARE_CLASS(ADestroyBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(ADestroyBall)


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestroyBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestroyBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyBall(ADestroyBall&&); \
	NO_API ADestroyBall(const ADestroyBall&); \
public:


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyBall(ADestroyBall&&); \
	NO_API ADestroyBall(const ADestroyBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestroyBall)


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ADestroyBall, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__P() { return STRUCT_OFFSET(ADestroyBall, P); }


#define ElfBowling_Source_ElfBowling_DestroyBall_h_9_PROLOG
#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_RPC_WRAPPERS \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_INCLASS \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElfBowling_Source_ElfBowling_DestroyBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_INCLASS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_DestroyBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElfBowling_Source_ElfBowling_DestroyBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

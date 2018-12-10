// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELFBOWLING_Elf_generated_h
#error "Elf.generated.h already included, missing '#pragma once' in Elf.h"
#endif
#define ELFBOWLING_Elf_generated_h

#define ElfBowling_Source_ElfBowling_Elf_h_12_RPC_WRAPPERS
#define ElfBowling_Source_ElfBowling_Elf_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ElfBowling_Source_ElfBowling_Elf_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElf(); \
	friend struct Z_Construct_UClass_AElf_Statics; \
public: \
	DECLARE_CLASS(AElf, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(AElf)


#define ElfBowling_Source_ElfBowling_Elf_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAElf(); \
	friend struct Z_Construct_UClass_AElf_Statics; \
public: \
	DECLARE_CLASS(AElf, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElfBowling"), NO_API) \
	DECLARE_SERIALIZER(AElf)


#define ElfBowling_Source_ElfBowling_Elf_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElf(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElf) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElf); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElf(AElf&&); \
	NO_API AElf(const AElf&); \
public:


#define ElfBowling_Source_ElfBowling_Elf_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElf(AElf&&); \
	NO_API AElf(const AElf&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElf); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElf)


#define ElfBowling_Source_ElfBowling_Elf_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELfMesh() { return STRUCT_OFFSET(AElf, ELfMesh); }


#define ElfBowling_Source_ElfBowling_Elf_h_9_PROLOG
#define ElfBowling_Source_ElfBowling_Elf_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_Elf_h_12_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_Elf_h_12_RPC_WRAPPERS \
	ElfBowling_Source_ElfBowling_Elf_h_12_INCLASS \
	ElfBowling_Source_ElfBowling_Elf_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElfBowling_Source_ElfBowling_Elf_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElfBowling_Source_ElfBowling_Elf_h_12_PRIVATE_PROPERTY_OFFSET \
	ElfBowling_Source_ElfBowling_Elf_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_Elf_h_12_INCLASS_NO_PURE_DECLS \
	ElfBowling_Source_ElfBowling_Elf_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElfBowling_Source_ElfBowling_Elf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

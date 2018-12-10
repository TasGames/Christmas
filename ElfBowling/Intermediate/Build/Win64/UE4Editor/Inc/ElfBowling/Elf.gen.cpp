// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElfBowling/Elf.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElf() {}
// Cross Module References
	ELFBOWLING_API UClass* Z_Construct_UClass_AElf_NoRegister();
	ELFBOWLING_API UClass* Z_Construct_UClass_AElf();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElfBowling();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AElf::StaticRegisterNativesAElf()
	{
	}
	UClass* Z_Construct_UClass_AElf_NoRegister()
	{
		return AElf::StaticClass();
	}
	struct Z_Construct_UClass_AElf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELfMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELfMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElfBowling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElf_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elf.h" },
		{ "ModuleRelativePath", "Elf.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElf_Statics::NewProp_ELfMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Elf.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElf_Statics::NewProp_ELfMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ELfMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AElf, ELfMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElf_Statics::NewProp_ELfMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AElf_Statics::NewProp_ELfMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElf_Statics::NewProp_ELfMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElf>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElf_Statics::ClassParams = {
		&AElf::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AElf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AElf_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AElf_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AElf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElf()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElf_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElf, 1832403694);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElf(Z_Construct_UClass_AElf, &AElf::StaticClass, TEXT("/Script/ElfBowling"), TEXT("AElf"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElf);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

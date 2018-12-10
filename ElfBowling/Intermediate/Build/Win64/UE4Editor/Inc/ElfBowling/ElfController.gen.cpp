// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElfBowling/ElfController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElfController() {}
// Cross Module References
	ELFBOWLING_API UClass* Z_Construct_UClass_AElfController_NoRegister();
	ELFBOWLING_API UClass* Z_Construct_UClass_AElfController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElfBowling();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELFBOWLING_API UClass* Z_Construct_UClass_AElf_NoRegister();
// End Cross Module References
	void AElfController::StaticRegisterNativesAElfController()
	{
	}
	UClass* Z_Construct_UClass_AElfController_NoRegister()
	{
		return AElfController::StaticClass();
	}
	struct Z_Construct_UClass_AElfController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElfClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ElfClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElfController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElfBowling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElfController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ElfController.h" },
		{ "ModuleRelativePath", "ElfController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElfController_Statics::NewProp_ElfClass_MetaData[] = {
		{ "Category", "Elf" },
		{ "ModuleRelativePath", "ElfController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AElfController_Statics::NewProp_ElfClass = { UE4CodeGen_Private::EPropertyClass::Class, "ElfClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AElfController, ElfClass), Z_Construct_UClass_AElf_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AElfController_Statics::NewProp_ElfClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AElfController_Statics::NewProp_ElfClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElfController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElfController_Statics::NewProp_ElfClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElfController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElfController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElfController_Statics::ClassParams = {
		&AElfController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AElfController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AElfController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AElfController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AElfController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElfController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElfController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElfController, 1620572424);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElfController(Z_Construct_UClass_AElfController, &AElfController::StaticClass, TEXT("/Script/ElfBowling"), TEXT("AElfController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElfController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

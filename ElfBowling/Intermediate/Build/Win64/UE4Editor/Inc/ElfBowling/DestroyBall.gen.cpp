// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElfBowling/DestroyBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyBall() {}
// Cross Module References
	ELFBOWLING_API UClass* Z_Construct_UClass_ADestroyBall_NoRegister();
	ELFBOWLING_API UClass* Z_Construct_UClass_ADestroyBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElfBowling();
	ELFBOWLING_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADestroyBall::StaticRegisterNativesADestroyBall()
	{
	}
	UClass* Z_Construct_UClass_ADestroyBall_NoRegister()
	{
		return ADestroyBall::StaticClass();
	}
	struct Z_Construct_UClass_ADestroyBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestroyBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElfBowling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DestroyBall.h" },
		{ "ModuleRelativePath", "DestroyBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyBall_Statics::NewProp_P_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "DestroyBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyBall_Statics::NewProp_P = { UE4CodeGen_Private::EPropertyClass::Object, "P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADestroyBall, P), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestroyBall_Statics::NewProp_P_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADestroyBall_Statics::NewProp_P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyBall_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "DestroyBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DestroyBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyBall_Statics::NewProp_BoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ADestroyBall, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestroyBall_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADestroyBall_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestroyBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyBall_Statics::NewProp_P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyBall_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestroyBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestroyBall_Statics::ClassParams = {
		&ADestroyBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ADestroyBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ADestroyBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADestroyBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADestroyBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestroyBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestroyBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestroyBall, 3073938545);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestroyBall(Z_Construct_UClass_ADestroyBall, &ADestroyBall::StaticClass, TEXT("/Script/ElfBowling"), TEXT("ADestroyBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElfBowling/BowlingBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBowlingBall() {}
// Cross Module References
	ELFBOWLING_API UClass* Z_Construct_UClass_ABowlingBall_NoRegister();
	ELFBOWLING_API UClass* Z_Construct_UClass_ABowlingBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElfBowling();
// End Cross Module References
	void ABowlingBall::StaticRegisterNativesABowlingBall()
	{
	}
	UClass* Z_Construct_UClass_ABowlingBall_NoRegister()
	{
		return ABowlingBall::StaticClass();
	}
	struct Z_Construct_UClass_ABowlingBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABowlingBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElfBowling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABowlingBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BowlingBall.h" },
		{ "ModuleRelativePath", "BowlingBall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABowlingBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABowlingBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABowlingBall_Statics::ClassParams = {
		&ABowlingBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABowlingBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABowlingBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABowlingBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABowlingBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABowlingBall, 1171832604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABowlingBall(Z_Construct_UClass_ABowlingBall, &ABowlingBall::StaticClass, TEXT("/Script/ElfBowling"), TEXT("ABowlingBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABowlingBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

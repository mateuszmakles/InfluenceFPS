// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfluenceFPS/IslandActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIslandActor() {}
// Cross Module References
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AIslandActor_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AIslandActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
// End Cross Module References
	void AIslandActor::StaticRegisterNativesAIslandActor()
	{
	}
	UClass* Z_Construct_UClass_AIslandActor_NoRegister()
	{
		return AIslandActor::StaticClass();
	}
	struct Z_Construct_UClass_AIslandActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIslandActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIslandActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IslandActor.h" },
		{ "ModuleRelativePath", "IslandActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIslandActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIslandActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIslandActor_Statics::ClassParams = {
		&AIslandActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIslandActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIslandActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIslandActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIslandActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIslandActor, 978124048);
	template<> INFLUENCEFPS_API UClass* StaticClass<AIslandActor>()
	{
		return AIslandActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIslandActor(Z_Construct_UClass_AIslandActor, &AIslandActor::StaticClass, TEXT("/Script/InfluenceFPS"), TEXT("AIslandActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIslandActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

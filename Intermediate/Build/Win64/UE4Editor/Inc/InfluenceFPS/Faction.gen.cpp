// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfluenceFPS/Faction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaction() {}
// Cross Module References
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UFaction_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UFaction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
// End Cross Module References
	void UFaction::StaticRegisterNativesUFaction()
	{
	}
	UClass* Z_Construct_UClass_UFaction_NoRegister()
	{
		return UFaction::StaticClass();
	}
	struct Z_Construct_UClass_UFaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Faction.h" },
		{ "ModuleRelativePath", "Faction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaction_Statics::ClassParams = {
		&UFaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaction, 490770987);
	template<> INFLUENCEFPS_API UClass* StaticClass<UFaction>()
	{
		return UFaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaction(Z_Construct_UClass_UFaction, &UFaction::StaticClass, TEXT("/Script/InfluenceFPS"), TEXT("UFaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

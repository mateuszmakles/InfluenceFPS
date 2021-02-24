// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfluenceFPS/InfluenceFPSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfluenceFPSHUD() {}
// Cross Module References
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AInfluenceFPSHUD_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AInfluenceFPSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
// End Cross Module References
	void AInfluenceFPSHUD::StaticRegisterNativesAInfluenceFPSHUD()
	{
	}
	UClass* Z_Construct_UClass_AInfluenceFPSHUD_NoRegister()
	{
		return AInfluenceFPSHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInfluenceFPSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfluenceFPSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfluenceFPSHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InfluenceFPSHUD.h" },
		{ "ModuleRelativePath", "InfluenceFPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfluenceFPSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfluenceFPSHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfluenceFPSHUD_Statics::ClassParams = {
		&AInfluenceFPSHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInfluenceFPSHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfluenceFPSHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfluenceFPSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfluenceFPSHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfluenceFPSHUD, 3021700901);
	template<> INFLUENCEFPS_API UClass* StaticClass<AInfluenceFPSHUD>()
	{
		return AInfluenceFPSHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfluenceFPSHUD(Z_Construct_UClass_AInfluenceFPSHUD, &AInfluenceFPSHUD::StaticClass, TEXT("/Script/InfluenceFPS"), TEXT("AInfluenceFPSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfluenceFPSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

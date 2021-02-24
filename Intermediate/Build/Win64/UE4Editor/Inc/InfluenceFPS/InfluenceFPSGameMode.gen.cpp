// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfluenceFPS/InfluenceFPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfluenceFPSGameMode() {}
// Cross Module References
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AInfluenceFPSGameMode_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_AInfluenceFPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
// End Cross Module References
	void AInfluenceFPSGameMode::StaticRegisterNativesAInfluenceFPSGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInfluenceFPSGameMode_NoRegister()
	{
		return AInfluenceFPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInfluenceFPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfluenceFPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfluenceFPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InfluenceFPSGameMode.h" },
		{ "ModuleRelativePath", "InfluenceFPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfluenceFPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfluenceFPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfluenceFPSGameMode_Statics::ClassParams = {
		&AInfluenceFPSGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInfluenceFPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfluenceFPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfluenceFPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfluenceFPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfluenceFPSGameMode, 3211206972);
	template<> INFLUENCEFPS_API UClass* StaticClass<AInfluenceFPSGameMode>()
	{
		return AInfluenceFPSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfluenceFPSGameMode(Z_Construct_UClass_AInfluenceFPSGameMode, &AInfluenceFPSGameMode::StaticClass, TEXT("/Script/InfluenceFPS"), TEXT("AInfluenceFPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfluenceFPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

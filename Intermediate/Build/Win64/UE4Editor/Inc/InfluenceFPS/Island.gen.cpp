// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfluenceFPS/Island.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsland() {}
// Cross Module References
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UIsland_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UIsland();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UFaction_NoRegister();
// End Cross Module References
	void UIsland::StaticRegisterNativesUIsland()
	{
	}
	UClass* Z_Construct_UClass_UIsland_NoRegister()
	{
		return UIsland::StaticClass();
	}
	struct Z_Construct_UClass_UIsland_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Factions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsland_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsland_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*USTRUCT()\nstruct Faction\n{\n\x09GENERATED_BODY()\n\n\x09""enum Name : char\n\x09{\n\x09\x09""Army,\n\x09\x09Government,\n\x09\x09Traders,\n\x09\x09Pirates,\n\n\x09\x09""COUNT\n\x09};\n\n\x09""Faction() = default;\n\n\x09""Faction(const Faction& faction);\n\n\x09""Faction(const Name& name, float share = 0.f);\n\n\x09Name FactionName;\n\x09""float Influence;\n\n};*/" },
		{ "IncludePath", "Island.h" },
		{ "ModuleRelativePath", "Island.h" },
		{ "ToolTip", "USTRUCT()\nstruct Faction\n{\n       GENERATED_BODY()\n\n       enum Name : char\n       {\n               Army,\n               Government,\n               Traders,\n               Pirates,\n\n               COUNT\n       };\n\n       Faction() = default;\n\n       Faction(const Faction& faction);\n\n       Faction(const Name& name, float share = 0.f);\n\n       Name FactionName;\n       float Influence;\n\n};" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsland_Statics::NewProp_Factions_Inner = { "Factions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsland_Statics::NewProp_Factions_MetaData[] = {
		{ "ModuleRelativePath", "Island.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsland_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsland, Factions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsland_Statics::NewProp_Factions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsland_Statics::NewProp_Factions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsland_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsland_Statics::NewProp_Factions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsland_Statics::NewProp_Factions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsland_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsland>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsland_Statics::ClassParams = {
		&UIsland::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsland_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsland_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsland_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsland_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsland()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsland_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsland, 2852736815);
	template<> INFLUENCEFPS_API UClass* StaticClass<UIsland>()
	{
		return UIsland::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsland(Z_Construct_UClass_UIsland, &UIsland::StaticClass, TEXT("/Script/InfluenceFPS"), TEXT("UIsland"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsland);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

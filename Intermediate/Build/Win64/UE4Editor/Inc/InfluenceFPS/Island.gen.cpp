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
	INFLUENCEFPS_API UScriptStruct* Z_Construct_UScriptStruct_Faction();
	UPackage* Z_Construct_UPackage__Script_InfluenceFPS();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UIsland_NoRegister();
	INFLUENCEFPS_API UClass* Z_Construct_UClass_UIsland();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* Faction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INFLUENCEFPS_API uint32 Get_Z_Construct_UScriptStruct_Faction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_Faction, Z_Construct_UPackage__Script_InfluenceFPS(), TEXT("action"), sizeof(Faction), Get_Z_Construct_UScriptStruct_Faction_Hash());
	}
	return Singleton;
}
template<> INFLUENCEFPS_API UScriptStruct* StaticStruct<Faction>()
{
	return Faction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_Faction(Faction::StaticStruct, TEXT("/Script/InfluenceFPS"), TEXT("action"), false, nullptr, nullptr);
static struct FScriptStruct_InfluenceFPS_StaticRegisterNativesFaction
{
	FScriptStruct_InfluenceFPS_StaticRegisterNativesFaction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("action")),new UScriptStruct::TCppStructOps<Faction>);
	}
} ScriptStruct_InfluenceFPS_StaticRegisterNativesFaction;
	struct Z_Construct_UScriptStruct_Faction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Faction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Island.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Faction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Faction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_Faction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InfluenceFPS,
		nullptr,
		&NewStructOps,
		"action",
		sizeof(Faction),
		alignof(Faction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_Faction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Faction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_Faction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_Faction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InfluenceFPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("action"), sizeof(Faction), Get_Z_Construct_UScriptStruct_Faction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_Faction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_Faction_Hash() { return 388232396U; }
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
		{ "IncludePath", "Island.h" },
		{ "ModuleRelativePath", "Island.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsland_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsland>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsland_Statics::ClassParams = {
		&UIsland::StaticClass,
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
	IMPLEMENT_CLASS(UIsland, 3294498115);
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

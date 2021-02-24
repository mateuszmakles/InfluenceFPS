// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INFLUENCEFPS_InfluenceFPSProjectile_generated_h
#error "InfluenceFPSProjectile.generated.h already included, missing '#pragma once' in InfluenceFPSProjectile.h"
#endif
#define INFLUENCEFPS_InfluenceFPSProjectile_generated_h

#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_SPARSE_DATA
#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInfluenceFPSProjectile(); \
	friend struct Z_Construct_UClass_AInfluenceFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AInfluenceFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InfluenceFPS"), NO_API) \
	DECLARE_SERIALIZER(AInfluenceFPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInfluenceFPSProjectile(); \
	friend struct Z_Construct_UClass_AInfluenceFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AInfluenceFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InfluenceFPS"), NO_API) \
	DECLARE_SERIALIZER(AInfluenceFPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInfluenceFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInfluenceFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInfluenceFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfluenceFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInfluenceFPSProjectile(AInfluenceFPSProjectile&&); \
	NO_API AInfluenceFPSProjectile(const AInfluenceFPSProjectile&); \
public:


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInfluenceFPSProjectile(AInfluenceFPSProjectile&&); \
	NO_API AInfluenceFPSProjectile(const AInfluenceFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInfluenceFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfluenceFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInfluenceFPSProjectile)


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AInfluenceFPSProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AInfluenceFPSProjectile, ProjectileMovement); }


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_12_PROLOG
#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_SPARSE_DATA \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_RPC_WRAPPERS \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_INCLASS \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_SPARSE_DATA \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INFLUENCEFPS_API UClass* StaticClass<class AInfluenceFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InfluenceFPS_Source_InfluenceFPS_InfluenceFPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

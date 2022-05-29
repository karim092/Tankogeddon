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
struct FHitResult;
#ifdef TANKOGEDDON_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TANKOGEDDON_Projectile_generated_h

#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin); \
	DECLARE_FUNCTION(execMove);


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin); \
	DECLARE_FUNCTION(execMove);


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AProjectile, Mesh); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(AProjectile, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__MoveRate() { return STRUCT_OFFSET(AProjectile, MoveRate); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectile, Damage); }


#define Tankogeddon_Source_Tankogeddon_Projectile_h_9_PROLOG
#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_INCLASS \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

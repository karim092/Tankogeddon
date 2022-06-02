// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_Cannon_generated_h
#error "Cannon.generated.h already included, missing '#pragma once' in Cannon.h"
#endif
#define TANKOGEDDON_Cannon_generated_h

#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStocks);


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStocks);


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public:


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannon)


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACannon, Mesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ACannon, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ACannon, FireRate); } \
	FORCEINLINE static uint32 __PPO__FireRange() { return STRUCT_OFFSET(ACannon, FireRange); } \
	FORCEINLINE static uint32 __PPO__FireDamage() { return STRUCT_OFFSET(ACannon, FireDamage); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ACannon, Type); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ACannon, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__AmountShellsSpecial() { return STRUCT_OFFSET(ACannon, AmountShellsSpecial); } \
	FORCEINLINE static uint32 __PPO__Shells() { return STRUCT_OFFSET(ACannon, Shells); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ACannon, Damage); } \
	FORCEINLINE static uint32 __PPO__SpellBox() { return STRUCT_OFFSET(ACannon, SpellBox); } \
	FORCEINLINE static uint32 __PPO__other() { return STRUCT_OFFSET(ACannon, other); }


#define Tankogeddon_Source_Tankogeddon_Cannon_h_12_PROLOG
#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_INCLASS \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_Cannon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Cannon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ACannon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_Cannon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

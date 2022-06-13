// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageData;
#ifdef TANKOGEDDON_TankFactory_generated_h
#error "TankFactory.generated.h already included, missing '#pragma once' in TankFactory.h"
#endif
#define TANKOGEDDON_TankFactory_generated_h

#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public:


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankFactory)


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATankFactory, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__TankSpawnPoint() { return STRUCT_OFFSET(ATankFactory, TankSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__HitCollider() { return STRUCT_OFFSET(ATankFactory, HitCollider); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ATankFactory, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__TankClass() { return STRUCT_OFFSET(ATankFactory, TankClass); } \
	FORCEINLINE static uint32 __PPO__TankSpawnRate() { return STRUCT_OFFSET(ATankFactory, TankSpawnRate); } \
	FORCEINLINE static uint32 __PPO__TankWayPoint() { return STRUCT_OFFSET(ATankFactory, TankWayPoint); } \
	FORCEINLINE static uint32 __PPO__SpawnEffect() { return STRUCT_OFFSET(ATankFactory, SpawnEffect); } \
	FORCEINLINE static uint32 __PPO__DeadEffect() { return STRUCT_OFFSET(ATankFactory, DeadEffect); }


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_11_PROLOG
#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_INCLASS \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_TankFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATankFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_TankFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

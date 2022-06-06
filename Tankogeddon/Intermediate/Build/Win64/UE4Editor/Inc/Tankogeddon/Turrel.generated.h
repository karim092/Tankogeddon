// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageData;
#ifdef TANKOGEDDON_Turrel_generated_h
#error "Turrel.generated.h already included, missing '#pragma once' in Turrel.h"
#endif
#define TANKOGEDDON_Turrel_generated_h

#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execOnDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execOnDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurrel(); \
	friend struct Z_Construct_UClass_ATurrel_Statics; \
public: \
	DECLARE_CLASS(ATurrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATurrel) \
	virtual UObject* _getUObject() const override { return const_cast<ATurrel*>(this); }


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATurrel(); \
	friend struct Z_Construct_UClass_ATurrel_Statics; \
public: \
	DECLARE_CLASS(ATurrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATurrel) \
	virtual UObject* _getUObject() const override { return const_cast<ATurrel*>(this); }


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurrel(ATurrel&&); \
	NO_API ATurrel(const ATurrel&); \
public:


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurrel(ATurrel&&); \
	NO_API ATurrel(const ATurrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurrel)


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankPawn() { return STRUCT_OFFSET(ATurrel, TankPawn); } \
	FORCEINLINE static uint32 __PPO__Turrel() { return STRUCT_OFFSET(ATurrel, Turrel); } \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATurrel, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATurrel, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__CannonSetupPoint() { return STRUCT_OFFSET(ATurrel, CannonSetupPoint); } \
	FORCEINLINE static uint32 __PPO__HitCollision() { return STRUCT_OFFSET(ATurrel, HitCollision); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ATurrel, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__CannonClass() { return STRUCT_OFFSET(ATurrel, CannonClass); } \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(ATurrel, Pawn); } \
	FORCEINLINE static uint32 __PPO__Cannon() { return STRUCT_OFFSET(ATurrel, Cannon); } \
	FORCEINLINE static uint32 __PPO__TargetingRange() { return STRUCT_OFFSET(ATurrel, TargetingRange); } \
	FORCEINLINE static uint32 __PPO__TargetingSpeed() { return STRUCT_OFFSET(ATurrel, TargetingSpeed); } \
	FORCEINLINE static uint32 __PPO__TargetingRate() { return STRUCT_OFFSET(ATurrel, TargetingRate); } \
	FORCEINLINE static uint32 __PPO__Accurency() { return STRUCT_OFFSET(ATurrel, Accurency); } \
	FORCEINLINE static uint32 __PPO__DeadEffect() { return STRUCT_OFFSET(ATurrel, DeadEffect); } \
	FORCEINLINE static uint32 __PPO__DEffect() { return STRUCT_OFFSET(ATurrel, DEffect); }


#define Tankogeddon_Source_Tankogeddon_Turrel_h_17_PROLOG
#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_INCLASS \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_Turrel_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_Turrel_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATurrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_Turrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

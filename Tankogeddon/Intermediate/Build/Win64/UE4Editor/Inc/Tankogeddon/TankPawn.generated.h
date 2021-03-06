// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FDamageData;
#ifdef TANKOGEDDON_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define TANKOGEDDON_TankPawn_generated_h

#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateTurretTo); \
	DECLARE_FUNCTION(execGetTurretForwardVector); \
	DECLARE_FUNCTION(execGetMovementAccurency); \
	DECLARE_FUNCTION(execGetPatrollingPoints); \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execOnDie); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execFireSpecial); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateTurretTo); \
	DECLARE_FUNCTION(execGetTurretForwardVector); \
	DECLARE_FUNCTION(execGetMovementAccurency); \
	DECLARE_FUNCTION(execGetPatrollingPoints); \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execOnDie); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execFireSpecial); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATankPawn*>(this); }


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATankPawn*>(this); }


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATankPawn, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATankPawn, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATankPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATankPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ATankPawn, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(ATankPawn, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(ATankPawn, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ATankPawn, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__InterpolationKey() { return STRUCT_OFFSET(ATankPawn, InterpolationKey); } \
	FORCEINLINE static uint32 __PPO__TurretRotationInterpolationKey() { return STRUCT_OFFSET(ATankPawn, TurretRotationInterpolationKey); } \
	FORCEINLINE static uint32 __PPO__PatrollingPoints() { return STRUCT_OFFSET(ATankPawn, PatrollingPoints); } \
	FORCEINLINE static uint32 __PPO__MovementAccurency() { return STRUCT_OFFSET(ATankPawn, MovementAccurency); } \
	FORCEINLINE static uint32 __PPO__TankController() { return STRUCT_OFFSET(ATankPawn, TankController); } \
	FORCEINLINE static uint32 __PPO__CannonClass() { return STRUCT_OFFSET(ATankPawn, CannonClass); } \
	FORCEINLINE static uint32 __PPO__Cannon() { return STRUCT_OFFSET(ATankPawn, Cannon); } \
	FORCEINLINE static uint32 __PPO__YankPawn() { return STRUCT_OFFSET(ATankPawn, YankPawn); }


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_18_PROLOG
#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_INCLASS \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_TankPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

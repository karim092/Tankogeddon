// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define TANKOGEDDON_TankAIController_generated_h

#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_RPC_WRAPPERS
#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankPawn() { return STRUCT_OFFSET(ATankAIController, TankPawn); } \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(ATankAIController, PlayerPawn); } \
	FORCEINLINE static uint32 __PPO__PatrollingPoints() { return STRUCT_OFFSET(ATankAIController, PatrollingPoints); } \
	FORCEINLINE static uint32 __PPO__MovementAccurency() { return STRUCT_OFFSET(ATankAIController, MovementAccurency); } \
	FORCEINLINE static uint32 __PPO__TargetingRange() { return STRUCT_OFFSET(ATankAIController, TargetingRange); } \
	FORCEINLINE static uint32 __PPO__TargetingSpeed() { return STRUCT_OFFSET(ATankAIController, TargetingSpeed); } \
	FORCEINLINE static uint32 __PPO__Accurency() { return STRUCT_OFFSET(ATankAIController, Accurency); }


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_14_PROLOG
#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_INCLASS \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_TankAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATankAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

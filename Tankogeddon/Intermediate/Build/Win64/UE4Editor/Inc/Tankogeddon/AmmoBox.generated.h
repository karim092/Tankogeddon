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
#ifdef TANKOGEDDON_AmmoBox_generated_h
#error "AmmoBox.generated.h already included, missing '#pragma once' in AmmoBox.h"
#endif
#define TANKOGEDDON_AmmoBox_generated_h

#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoBox(); \
	friend struct Z_Construct_UClass_AAmmoBox_Statics; \
public: \
	DECLARE_CLASS(AAmmoBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AAmmoBox)


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoBox(); \
	friend struct Z_Construct_UClass_AAmmoBox_Statics; \
public: \
	DECLARE_CLASS(AAmmoBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AAmmoBox)


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoBox(AAmmoBox&&); \
	NO_API AAmmoBox(const AAmmoBox&); \
public:


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoBox(AAmmoBox&&); \
	NO_API AAmmoBox(const AAmmoBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoBox)


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AAmmoBox, Mesh); } \
	FORCEINLINE static uint32 __PPO__CannonClass() { return STRUCT_OFFSET(AAmmoBox, CannonClass); }


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_9_PROLOG
#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_INCLASS \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_AmmoBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AAmmoBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_AmmoBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

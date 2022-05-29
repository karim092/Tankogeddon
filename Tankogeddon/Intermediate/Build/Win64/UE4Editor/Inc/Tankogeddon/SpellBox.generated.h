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
#ifdef TANKOGEDDON_SpellBox_generated_h
#error "SpellBox.generated.h already included, missing '#pragma once' in SpellBox.h"
#endif
#define TANKOGEDDON_SpellBox_generated_h

#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellBox(); \
	friend struct Z_Construct_UClass_ASpellBox_Statics; \
public: \
	DECLARE_CLASS(ASpellBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ASpellBox)


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpellBox(); \
	friend struct Z_Construct_UClass_ASpellBox_Statics; \
public: \
	DECLARE_CLASS(ASpellBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ASpellBox)


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpellBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpellBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellBox(ASpellBox&&); \
	NO_API ASpellBox(const ASpellBox&); \
public:


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellBox(ASpellBox&&); \
	NO_API ASpellBox(const ASpellBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellBox)


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASpellBox, Mesh); } \
	FORCEINLINE static uint32 __PPO__Cannon() { return STRUCT_OFFSET(ASpellBox, Cannon); } \
	FORCEINLINE static uint32 __PPO__SpellBox() { return STRUCT_OFFSET(ASpellBox, SpellBox); }


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_12_PROLOG
#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_INCLASS \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_SpellBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_SpellBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ASpellBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_SpellBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

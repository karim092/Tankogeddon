// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_GameStructs_generated_h
#error "GameStructs.generated.h already included, missing '#pragma once' in GameStructs.h"
#endif
#define TANKOGEDDON_GameStructs_generated_h

#define Tankogeddon_Source_Tankogeddon_GameStructs_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageData_Statics; \
	TANKOGEDDON_API static class UScriptStruct* StaticStruct();


template<> TANKOGEDDON_API UScriptStruct* StaticStruct<struct FDamageData>();

#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_RPC_WRAPPERS
#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public:


#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs)


#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_PRIVATE_PROPERTY_OFFSET
#define Tankogeddon_Source_Tankogeddon_GameStructs_h_12_PROLOG
#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_INCLASS \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_GameStructs_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class UGameStructs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_GameStructs_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) 

enum class ECannonType : uint8;
template<> TANKOGEDDON_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

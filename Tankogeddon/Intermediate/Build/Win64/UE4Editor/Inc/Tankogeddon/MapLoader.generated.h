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
#ifdef TANKOGEDDON_MapLoader_generated_h
#error "MapLoader.generated.h already included, missing '#pragma once' in MapLoader.h"
#endif
#define TANKOGEDDON_MapLoader_generated_h

#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_SPARSE_DATA
#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapLoader(); \
	friend struct Z_Construct_UClass_AMapLoader_Statics; \
public: \
	DECLARE_CLASS(AMapLoader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AMapLoader)


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMapLoader(); \
	friend struct Z_Construct_UClass_AMapLoader_Statics; \
public: \
	DECLARE_CLASS(AMapLoader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AMapLoader)


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapLoader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapLoader(AMapLoader&&); \
	NO_API AMapLoader(const AMapLoader&); \
public:


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapLoader(AMapLoader&&); \
	NO_API AMapLoader(const AMapLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapLoader)


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Hitcollider() { return STRUCT_OFFSET(AMapLoader, Hitcollider); } \
	FORCEINLINE static uint32 __PPO__OpenLevelName() { return STRUCT_OFFSET(AMapLoader, OpenLevelName); }


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_9_PROLOG
#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_RPC_WRAPPERS \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_INCLASS \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankogeddon_Source_Tankogeddon_MapLoader_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_PRIVATE_PROPERTY_OFFSET \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_SPARSE_DATA \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_INCLASS_NO_PURE_DECLS \
	Tankogeddon_Source_Tankogeddon_MapLoader_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AMapLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankogeddon_Source_Tankogeddon_MapLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

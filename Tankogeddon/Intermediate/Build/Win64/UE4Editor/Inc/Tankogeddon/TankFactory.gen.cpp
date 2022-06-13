// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/TankFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankFactory() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankFactory_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATankFactory::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankFactory::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankFactory::execTakeDamage)
	{
		P_GET_STRUCT(FDamageData,Z_Param_DamageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageData);
		P_NATIVE_END;
	}
	void ATankFactory::StaticRegisterNativesATankFactory()
	{
		UClass* Class = ATankFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTaked", &ATankFactory::execDamageTaked },
			{ "Die", &ATankFactory::execDie },
			{ "TakeDamage", &ATankFactory::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankFactory_DamageTaked_Statics
	{
		struct TankFactory_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankFactory_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "DamageTaked", nullptr, nullptr, sizeof(TankFactory_eventDamageTaked_Parms), Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankFactory_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankFactory_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankFactory_TakeDamage_Statics
	{
		struct TankFactory_eventTakeDamage_Parms
		{
			FDamageData DamageData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankFactory_eventTakeDamage_Parms, DamageData), Z_Construct_UScriptStruct_FDamageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::NewProp_DamageData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "TakeDamage", nullptr, nullptr, sizeof(TankFactory_eventTakeDamage_Parms), Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankFactory_NoRegister()
	{
		return ATankFactory::StaticClass();
	}
	struct Z_Construct_UClass_ATankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TankClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankSpawnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankSpawnRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankWayPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankWayPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TankWayPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankFactory_DamageTaked, "DamageTaked" }, // 231593255
		{ &Z_Construct_UFunction_ATankFactory_Die, "Die" }, // 2562198937
		{ &Z_Construct_UFunction_ATankFactory_TakeDamage, "TakeDamage" }, // 1173463316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TankFactory.h" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint = { "TankSpawnPoint", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider = { "HitCollider", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, HitCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankClass = { "TankClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankClass), Z_Construct_UClass_ATankPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnRate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnRate = { "TankSpawnRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankSpawnRate), METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnRate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint_Inner = { "TankWayPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint = { "TankWayPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankWayPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnEffect = { "SpawnEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, SpawnEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_DeadEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_DeadEffect = { "DeadEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, DeadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_DeadEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_DeadEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_DeadEffect,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATankFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(ATankFactory, IDamageTaker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankFactory_Statics::ClassParams = {
		&ATankFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankFactory_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankFactory, 3456405990);
	template<> TANKOGEDDON_API UClass* StaticClass<ATankFactory>()
	{
		return ATankFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankFactory(Z_Construct_UClass_ATankFactory, &ATankFactory::StaticClass, TEXT("/Script/Tankogeddon"), TEXT("ATankFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

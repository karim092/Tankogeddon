// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageTaker.h"
#include "GameStructs.h"
#include "TankFactory.generated.h"

UCLASS()
class TANKOGEDDON_API ATankFactory : public AActor, public IDamageTaker
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATankFactory();

	UFUNCTION()
	virtual void TakeDamage(FDamageData DamageData) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnNewTanks();

	UFUNCTION()
	void Die();

	UFUNCTION()
	void DamageTaked(float DamageValue);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* TankSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* HitCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<class ATankPawn> TankClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	float TankSpawnRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TArray<class ATargetPoint*> TankWayPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystem* SpawnEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystem* DeadEffect;
};

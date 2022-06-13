// Fill out your copyright notice in the Description page of Project Settings.


#include "TankFactory.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "HealthComponent.h"
#include "TankPawn.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>
#include "Engine/EngineTypes.h"

// Sets default values
ATankFactory::ATankFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(SceneComponent);

	TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("TankSpawnPoint"));
	TankSpawnPoint->AttachToComponent(SceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitCollider"));
	HitCollider->SetupAttachment(SceneComponent);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDie.AddUObject(this, &ATankFactory::Die);
	HealthComponent->OnHealthChange.AddUObject(this, &ATankFactory::DamageTaked);

	static ConstructorHelpers::FObjectFinder<UParticleSystem>SpawnParticle(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Monsters/FX_Monster_Ausar/P_AU_ShieldSlam_AOE.P_AU_ShieldSlam_AOE'"));
	SpawnEffect = SpawnParticle.Object;

	static ConstructorHelpers::FObjectFinder<UParticleSystem>DeadParticle(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Skill_RockBurst/P_RBurst_Fire_Eruption_01.P_RBurst_Fire_Eruption_01'"));
	DeadEffect = DeadParticle.Object;
}

void ATankFactory::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

// Called when the game starts or when spawned
void ATankFactory::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle targetingTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(targetingTimerHandle, this, &ATankFactory::SpawnNewTanks, TankSpawnRate, true, TankSpawnRate);
}

void ATankFactory::SpawnNewTanks()
{
	FTransform SpawnTransform(TankSpawnPoint->GetComponentRotation(), TankSpawnPoint->GetComponentLocation(), FVector(1));
	ATankPawn* newTank = GetWorld()->SpawnActorDeferred<ATankPawn>(TankClass, SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	newTank->SetPotrollingPoints(TankWayPoint);
	UParticleSystemComponent* MyParticles = UGameplayStatics::SpawnEmitterAtLocation(newTank->GetWorld(), SpawnEffect, newTank->GetActorLocation(), newTank->GetActorRotation(), newTank->GetActorScale(), true);
	UGameplayStatics::FinishSpawningActor(newTank, SpawnTransform);
}

void ATankFactory::Die()
{
	UParticleSystemComponent* MyParticles = UGameplayStatics::SpawnEmitterAtLocation(this->GetWorld(), SpawnEffect, this->GetActorLocation(), this->GetActorRotation(), this->GetActorScale(), true);
	Destroy();
}

void ATankFactory::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Factory %s taked damage : %f Health : %f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}


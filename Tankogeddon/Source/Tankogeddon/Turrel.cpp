// Fill out your copyright notice in the Description page of Project Settings.


#include "Turrel.h"
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include <Components/BoxComponent.h>
#include "Engine/StaticMesh.h"
#include "Kismet/KismetMathLibrary.h"
#include "UObject/UObjectGlobals.h"
#include "TimerManager.h"
#include "Cannon.h"
#include "GameFramework/Pawn.h"
#include "HealthComponent.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATurrel::ATurrel()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->AttachToComponent(TurretMesh, FAttachmentTransformRules::KeepRelativeTransform);

	HitCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("HitCollision"));
	HitCollision->SetupAttachment(BodyMesh);

	
	static ConstructorHelpers::FObjectFinder<UParticleSystem>Particle(TEXT("/ParticleSystem'/Game/StarterContent/Particles/P_Fire.P_Fire'"));
	DEffect = Particle.Object;

	UStaticMesh* turretMesh = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if (turretMesh)
	{
		TurretMesh->SetStaticMesh(turretMesh);
	}

	UStaticMesh* bodyMesh = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if (bodyMesh)
	{
		BodyMesh->SetStaticMesh(bodyMesh);
	}

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDie.AddUObject(this, &ATurrel::OnDie);
	HealthComponent->OnHealthChange.AddUObject(this, &ATurrel::DamageTaked);
}

void ATurrel::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ATurrel::OnDie()
{	
	Destroyed();
}

void ATurrel::DamageTaked(float Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("Turret %s taked damage : %f Health : %f"), *GetName(), Damage, HealthComponent->GetHealth());
}

FVector ATurrel::GetEyesPosition()
{
	return CannonSetupPoint->GetComponentLocation();
}

// Called when the game starts or when spawned
void ATurrel::BeginPlay()
{
	Super::BeginPlay();
	
	SetupCannon();
	//DeadEffect->DeactivateSystem();

	Pawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FTimerHandle targetingTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(targetingTimerHandle, this, &ATurrel::Targeting, TargetingRate, true, TargetingRate);
}

void ATurrel::Destroyed()
{
	UParticleSystemComponent* MyParticles = UGameplayStatics::SpawnEmitterAtLocation(this->GetWorld(), DEffect, this->GetActorLocation(), this->GetActorRotation(), this->GetActorScale(), true);
	if (Cannon)
		Cannon->Destroy();
	this->TurretMesh->DestroyComponent();
}

void ATurrel::Targeting()
{
	if (IsPlayerRange())
	{
		RotateToPlayer();
	}

	if (Cannon && CanFire() && Cannon->IsReadyToFire())
	{
		Fire();
	}
}

void ATurrel::RotateToPlayer()
{
	FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Pawn->GetActorLocation());
	if (TurretMesh)
	{
		FRotator currRotation = TurretMesh->GetComponentRotation();
		targetRotation.Pitch = currRotation.Pitch;
		targetRotation.Roll = currRotation.Roll;
		TurretMesh->SetWorldRotation(FMath::Lerp(currRotation, targetRotation, TargetingSpeed));
	}
	

}

bool ATurrel::IsPlayerRange()
{
	return FVector::Distance(GetActorLocation(), Pawn->GetActorLocation()) <= TargetingRange;
}

bool ATurrel::CanFire()
{

	if (!IsPlayerSeen())
		return false;

	if (IsPlayerSeen())
		return true;

	FVector targetingDir = TurretMesh->GetForwardVector();
	FVector dirToPlayer = Pawn->GetActorLocation() - GetActorLocation();
	dirToPlayer.Normalize();

	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(targetingDir, dirToPlayer)));
	return aimAngle <= Accurency;
}

bool ATurrel::IsPlayerSeen()
{

	FVector playerPos = Pawn->GetActorLocation();
	FVector eyesPos = this->GetEyesPosition();
	FHitResult hitResult;
	FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
	traceParams.bTraceComplex = true;
	traceParams.AddIgnoredActor(Turrel);
	traceParams.bReturnPhysicalMaterial = false;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, eyesPos, playerPos, ECollisionChannel::ECC_Visibility, traceParams))
	{
		if (hitResult.Actor.Get())
		{
			DrawDebugLine(GetWorld(), eyesPos, hitResult.Location, FColor::Cyan, false, 0.5f, 0, 10);
			return hitResult.Actor.Get() == Pawn;
		}
	}
	DrawDebugLine(GetWorld(), eyesPos, playerPos, FColor::Cyan, false, 0.5f, 0, 10);
	return true;
} 

void ATurrel::Fire()
{

	if (Cannon)
		Cannon->Fire();
}

void ATurrel::SetupCannon()
{
	if (!CannonClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannon class is null"));
		return;
	}
	FActorSpawnParameters params;
	params.Owner = this;
	Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, params);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}





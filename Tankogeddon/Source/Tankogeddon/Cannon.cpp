#include "Cannon.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include <iostream>
#include "Projectile.h"
#include <CollisionQueryParams.h>
#include <DrawDebugHelpers.h>
#include "SpellBox.h"

class ASpellBox;

ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = false;
	USceneComponent* sceeneCpm = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceeneCpm;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon mesh"));
	Mesh->SetupAttachment(RootComponent);
	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Spawnpoint"));
	ProjectileSpawnPoint->SetupAttachment(Mesh);
}

void ACannon::Fire()
{

	if (AmountShells == 0)
	{
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "AmountShells = 0");
		return;
	}
	else
	{

		if (!ReadyToFire)
		{

			return;

		}

		AmountShells = AmountShells - 1;
	}



	ReadyToFire = false;

	if (Type == ECannonType::FireProjectile)
	{

		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, FString::Printf(TEXT("Type: Fire - projectile, AmountShells %lld"), AmountShells));
		AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (projectile)
		{
			projectile->Start();
		}
	}
	else
	{

		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, FString(TEXT("Type: Fire - trace, AmountShells %lld"), AmountShells));

		LineTrace();

	}

	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
}

void ACannon::FireSpecial()
{
	
	if (AmountShellsSpecial == 0)
	{
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Red, "AmountShells = 0");
		return;
	}
	else
	{

		if (!ReadyToFire)
		{

			return;

		}

		AmountShellsSpecial = AmountShellsSpecial - 1;
	}


	ReadyToFire = false;
		
	if (Type == ECannonType::FireProjectile)
	{

		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Red, FString::Printf(TEXT("Type: FireSpecial - projectile, AmountShells %lld"), AmountShellsSpecial));
		AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (projectile)
		{
			projectile->Start();
		}

	}
	else
	{

		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Red, "FireSpecial - trace");

	}

	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);

}

bool ACannon::IsReadyToFire()
{
	return ReadyToFire;
}

void ACannon::AddStocks(int amount)
{


	if (amount)
	{

		AmountShells = AmountShells + amount;

	}

}


void ACannon::Reload()
{
	ReadyToFire = true;
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	Reload();
}

void ACannon::LineTrace()
{

	FHitResult hitResult;
	FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
	traceParams.bTraceComplex = true;
	traceParams.bReturnPhysicalMaterial = false;

	FVector start = ProjectileSpawnPoint->GetComponentLocation();
	FVector end = ProjectileSpawnPoint->GetForwardVector() * FireRange + start;

	if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_Visibility, traceParams))
	{

		DrawDebugLine(GetWorld(), start, hitResult.Location, FColor::Red, false, 0.5f, 0, 5);

		if (hitResult.Actor.Get())
		{

			hitResult.Actor.Get()->Destroy();

		}

	}
	else
	{

		DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.5f, 0, 5);

	}

}


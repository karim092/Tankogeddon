#include "Cannon.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include <iostream>

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

	}
	else
	{

		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, FString(TEXT("Type: Fire - trace, AmountShells %lld"), AmountShells));

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

void ACannon::Reload()
{
	ReadyToFire = true;
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	Reload();
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellBox.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TankPawn.h"

// Sets default values
ASpellBox::ASpellBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(SceneComponent);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASpellBox::OnMeshOverlapBegin);
	Mesh->SetCollisionProfileName(FName("OverlapAll"));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetGenerateOverlapEvents(true);

}

void ASpellBox::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//ATankPawn* Tank = Cast<ATankPawn>(OtherActor);
	
	Cannon = Cast<ACannon>(OtherActor);

	if (Cannon) 
	{
		
	Cannon->AddStocks(Amount);

	}
	
	Destroy();

}




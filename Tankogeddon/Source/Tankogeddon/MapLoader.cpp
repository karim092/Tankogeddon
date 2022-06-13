// Fill out your copyright notice in the Description page of Project Settings.


#include "MapLoader.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMapLoader::AMapLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	Hitcollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitcollider"));
	Hitcollider->SetupAttachment(SceneComponent);
	Hitcollider->OnComponentBeginOverlap.AddDynamic(this, &AMapLoader::OnTriggerOverlapBegin);
}

// Called when the game starts or when spawned
void AMapLoader::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMapLoader::OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweed, const FHitResult& SweepResult)
{
	UGameplayStatics::OpenLevel(GetWorld(), OpenLevelName);
}

// Called every frame
void AMapLoader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


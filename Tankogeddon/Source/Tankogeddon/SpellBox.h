// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cannon.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpellBox.generated.h"

class ACannon;

UCLASS()
class TANKOGEDDON_API ASpellBox : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpellBox();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stocks")
		int Amount = 0;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* Mesh;

	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY()
		ACannon* Cannon;

	UPROPERTY()
		ASpellBox* SpellBox;
};


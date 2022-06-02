// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageTaker.h"
#include "GameStructs.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_EVENT(UHealthComponent, FOnDie);
	DECLARE_EVENT_OneParam(UHealthComponent, FOnHealthChanged, float);

public:	
	
	UHealthComponent();

	FOnDie OnDie;
	FOnHealthChanged OnHealthChange;

	virtual void BeginPlay() override;
	void TakeDamage(FDamageData DamageData);

	float GetHealth() const;
	float GetHealthState() const;

	void AddHealth(float AddHealthValue);

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Value")
	float MaxHealth = 10.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Health Value")
	float CurrentHealth;

};

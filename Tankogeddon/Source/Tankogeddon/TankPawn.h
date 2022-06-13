// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DamageTaker.h"
#include "DamageTaker.h"
#include "Cannon.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class ATankPlayerController;
class ACannon;

UCLASS()
class TANKOGEDDON_API ATankPawn : public APawn, public IDamageTaker
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

	UFUNCTION()
	void MoveForward(float AxisValue);

	UFUNCTION()
	void RotateRight(float AxisValue);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Fire();

	UFUNCTION()
	void FireSpecial();

	void SetupCannon(TSubclassOf<ACannon> cannonClass);

	void ChangeWeapon(TSubclassOf<ACannon> cannonClass);

	UFUNCTION()
	void TakeDamage(FDamageData DamageData) override;

	UFUNCTION()
	void OnDie();

	UFUNCTION()
	void DamageTaked(float DamageValue);

	UFUNCTION()
	TArray<FVector> GetPatrollingPoints();

	void SetPotrollingPoints(TArray<class ATargetPoint*> NewPatrollingPoints);

	UFUNCTION()
	float GetMovementAccurency() { return MovementAccurency; };

	UFUNCTION()
	FVector GetTurretForwardVector();

	UFUNCTION()
	void RotateTurretTo(FVector TargetPosition);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* CannonSetupPoint;

	FVector GetEyesPosition();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float MoveSpeed = 100;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float RotationSpeed = 100;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float InterpolationKey = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Speed")
	float TurretRotationInterpolationKey = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Patrolpoints" , Meta = (MakeEditWidget = true))
	TArray<class ATargetPoint*> PatrollingPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Moveparams | Accurency")
	float MovementAccurency = 50;

	float TargetForwardAxisValue;
	float TargetRightAxisValue;
	float CurrentRightAxisValue;

	UPROPERTY()
	ATankPlayerController* TankController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Cannon")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY()
	ACannon* Cannon;

	UPROPERTY()
	ATankPawn* YankPawn;

};

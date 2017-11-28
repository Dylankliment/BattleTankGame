// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward De
class UTankBarrel; 
class UTankAimingComponent;
class UTankTurrets;
class AProjectile;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

private:
	// Sets default values for this pawn's properties
	ATank();

	//Local referance
	UTankBarrel * Barrel = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UTankAimingComponent* TankAimingComponent = nullptr;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AimAt(FVector OutHitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetTurretReference(UTankTurrets * TurretToSet);
	
	UPROPERTY(EditAnywhere, Category = Setup)
	TSubclassOf<AProjectile> ProjectileBluePrint;

	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 4000; 

	UPROPERTY(EditAnywhere, Category = Firing)
	float ReloadTimeInSeconds = 3;

	UFUNCTION(BlueprintCallable)
	void Fire();

	double LastFireTime = 0;

};

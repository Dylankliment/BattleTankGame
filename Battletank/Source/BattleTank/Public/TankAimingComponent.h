// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Forward Declaration
class UTankBarrel; 
class UTankTurrets;

// Holds barrel's properties and Elevates methods
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void AimAt(FVector OutHitLocation, float LaunchSpeed);

	void SetTurretReference(UTankTurrets* TurretToSet);
	

	void SetBarrelReference(UTankBarrel* BarrelToSet);


protected:

	

private:
	UTankTurrets* Turret = nullptr;

	UTankBarrel* Barrel = nullptr;

	void MoveBarrelTowards(FVector AimDirection);

	//void MoveTurretTowards(FVector AimDirection);

};

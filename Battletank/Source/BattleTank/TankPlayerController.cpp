// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "Tank.h"
#include "BattleTank.h"
#include "CollisionQueryParams.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("Playercontroller not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Playercontroller possessing: %s"), *(ControlledTank ->GetName()))
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }


	FVector OutHitLocation; //OUT Parameter
	//    Returns reference to OutHitLocation
	if (GetSightRayHitLocation(OutHitLocation)) // has "Side-effect", is going to line trace
	{
		GetControlledTank()->AimAt(OutHitLocation);
	}	
}

//Get World Location if Linetrance through Crosshair, true If It hits the landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& OutHitLocation) const
{
	//Find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	FVector LookDirection;
	//"De-project" the screen poisition of that crosshair to a world direction
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		//Line-trace along that look direction and see what we hit (Up to a max range)
		GetLookVectorHitLocation( LookDirection, OutHitLocation);
	}
	return true;
}


bool ATankPlayerController::GetLookDirection(FVector2D &ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLocation; // To be discarded, 
	return  DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, LookDirection);
	
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& OutHitLocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(HitResult,	StartLocation, EndLocation,	ECollisionChannel::ECC_Visibility))
	{
		OutHitLocation = HitResult.Location;
		return true;
	}	
	OutHitLocation = FVector(0);
	return false;
}

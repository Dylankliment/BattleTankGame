// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"


void UTankBarrel::Elevate(float RelativeSpeed) 
{	
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1.0f, 1.0f);
	//Move barrel X amount this frame
	//Given a max elevation speed and the frame time
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawElevation = RelativeRotation.Pitch + ElevationChange;

	auto ClampedElevation = FMath::Clamp<float>(RawElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(ClampedElevation, 0, 0));
}


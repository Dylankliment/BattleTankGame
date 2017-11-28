// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "BattleTank.h"
#include "Tank.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto ThisAITank = Cast<ATank>(GetPawn());
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (PlayerTank)
	{

		// TODO Move towards player

		// Aim towards player
		ThisAITank->AimAt(PlayerTank->GetActorLocation());

		// fire if ready

		ThisAITank->Fire(); // TODO Limit fire rate
	}



}





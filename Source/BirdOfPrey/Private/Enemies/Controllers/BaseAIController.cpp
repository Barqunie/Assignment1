// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/Controllers/BaseAIController.h"
 void ABaseAIController::OnPossess(APawn* InPawn)
{
}
 void ABaseAIController::Tick(float DeltaSeconds)
{
}

void ABaseAIController::SelectTarget()
{
}

void ABaseAIController::AimAt(FVector aimTarget)
{
}
void ABaseAIController::CheckFire()
{
}

void ABaseAIController::UpdateAim()
{
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}



bool ABaseAIController::ShouldStartFire()
{
	return false;
}

bool ABaseAIController::ShouldStopFire()
{
	return false;
}

bool ABaseAIController::ShouldUpdateAim()
{
	return false;
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

float APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed) const
{
	return 0.0f;
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float dist, float max) const
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment(FVector returnValue) const
{
	return FVector();
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player) const
{
}
//
//void APlayerShip::ShouldSpawnAIController()
//{
//}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

float APlayerShip::TakeDamage(float damageAmount)
{
	return 0.0f;
}

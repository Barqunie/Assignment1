// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform spawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int32 shotNumber)
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}

bool AProjectileWeapon::IsFiring()
{
	return false;
}

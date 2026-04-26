// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"
class ABaseProjectile;

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BirdSOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform spawnTransform);

	UFUNCTION(BlueprintPure, Category = "BirdSOfPrey")
	FTransform GetProjectileSpawnTransform(int32 shotNumber);

	UFUNCTION(BlueprintCallable, Category = "BirdSOfPrey")
	bool ReadyToFire();

	virtual bool IsFiring() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	TSubclassOf<ABaseProjectile> projectileType;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	float refireTime;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	float lastFireTime;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	int32 numShots;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	bool bIsFiring;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	float desiredZ;


};

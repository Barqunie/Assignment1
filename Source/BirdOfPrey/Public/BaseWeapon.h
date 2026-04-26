// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintCallable, Category = "BirdSOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdSOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdSOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintPure, Category = "BirdSOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintPure, Category = "BirdSOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintPure, Category = "BirdSOfPrey")
	virtual bool IsFiring();


private:
	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	USceneComponent* defaultSceneRoot;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(EditDefaultsOnly, Category = "BirdsOfPrey")
	bool bIsAutomatic;


};

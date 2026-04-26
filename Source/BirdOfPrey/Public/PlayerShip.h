// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	float GetShipConstantVelocity(FVector& Direction, float& Speed) const;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	float GetShipAxisAdjustment(float dist, float max)const;

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	FVector CalcOutofBoundsAdjustment(FVector returnValue)const;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player)const;

	//UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	//void ShouldSpawnAIController(); Cant write in c++ needs a output so cant use it in c++ but can be used in blueprints.

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	bool HasDiedRecently();

	virtual float  TakeDamage(float damageAmount) override;





private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	APlayerController* basePlayerController;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float InvulnerabilityTime;
};

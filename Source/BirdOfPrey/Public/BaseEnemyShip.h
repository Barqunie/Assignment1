// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"
 
class ABaseAIController;

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void Move();

	UPROPERTY(BlueprintReadOnly, Category = "BirdsOfPrey")
	ABaseAIController* ShipAIController;

private:


	
};

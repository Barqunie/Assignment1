// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UFloatingPawnMovement* floatingPawnMovement;
};

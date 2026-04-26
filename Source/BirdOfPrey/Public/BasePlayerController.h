// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnPlayerDeath(AController* Killer);

private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	bool bDiedWhileFiring;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable, Category="BirdsOfPrey")
	void AddScore(float amount);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool HasRemainingLives();

private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float playerScore;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")	
	int32 remainingLives;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float timeOfLastDeath;
};

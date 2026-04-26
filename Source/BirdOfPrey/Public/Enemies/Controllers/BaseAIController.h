// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABasePlayerController;
class ABaseGameAgent;

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AimAt(FVector aimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool ShouldUpdateAim();
	

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	float lastFireTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	float refireDelay = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	bool bShouldUpdateAim = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	ABasePlayerController* target = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey|Firing", meta = (AllowPrivateAccess = "true"))
	ABaseGameAgent* controlledAgent = nullptr;
};

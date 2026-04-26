// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BOPGameMode.generated.h"

class ABaseGameAgent;
class ABasePowerUp;
class ABasePlayerController;
/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABOPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	APlayerController* OnEnemyDied(ABaseGameAgent* Enemy,AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void EndGame (bool bSuccess);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SpawnEnemyFrom(const TArray<TSubclassOf<ABaseGameAgent>>& ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	float GetDistanceTravelled();



	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "BirdsOfPrey")
	UDataTable* PlayerAgentInfoTable;


private:
	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(VisibleAnywhere, Category = "BirdsOfPrey")
	ACameraActor* WorldCameraActor;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float SpawnOffset;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	FTimerHandle SpawnOffsetTimer;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	FTimerHandle ShipSpawnTimer;

	//UPROPERTY(EditAnywhere,  Category = "PowerUps")
	//TArray<TSubclassOf<ABasePowerUp>> PowerUpList;

	UPROPERTY(EditAnywhere, Category = "PowerUps")
	float PickUpSpawnPercent;

	UPROPERTY(EditAnywhere, Category = "PowerUps")
	bool IsGameOverScreen;


};

// Fill out your copyright notice in the Description page of Project Settings.


#include "BOPGameMode.h"
#include "Camera/CameraActor.h"
#include "BaseGameAgent.h"



ACameraActor GetWorldCameraActor()
{
	return ACameraActor();
}


FVector ABOPGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

ACameraActor* ABOPGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABOPGameMode::OnPlayerDied(ABasePlayerController* Player)
{
}

APlayerController* ABOPGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
	return nullptr;
}

void ABOPGameMode::StartGame()
{
}

void ABOPGameMode::EndGame(bool bSuccess)
{
}

void ABOPGameMode::SpawnEnemyFrom(const TArray<TSubclassOf<ABaseGameAgent>>& ClassList)
{
}

void ABOPGameMode::ResetGame()
{
}

void ABOPGameMode::RespawnPlayer()
{
}

void ABOPGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABOPGameMode::GetDistanceTravelled()
{
	return 0.0f;
}

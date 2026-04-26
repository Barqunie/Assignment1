// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"
#include "AgentData/AgentInfo.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Initialize member variables
}

// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGameAgent::ChangeWeaponType()
{
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform() const
{
	return FTransform();
}
void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo newAgentInfo)
{
}
void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

float ABaseGameAgent::TakeDamage(float damageAmount)
{
	return 0.0f;
}

bool ABaseGameAgent::IsAlive()
{
	return false;
}

void ABaseGameAgent::Died(UObject* Killer)
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::AimAt(FVector aimTarget)
{

}

FVector ABaseGameAgent::PlayDeathEffects()
{
	return FVector();
}

FVector ABaseGameAgent::CheckForOutOfBounds()
{
	return FVector();
}

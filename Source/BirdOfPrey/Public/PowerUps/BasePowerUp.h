// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerUp.generated.h"

class APlayerShip;

UCLASS()
class BIRDOFPREY_API ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void Apply(APlayerShip* playerShip);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void PlayEffects();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	USoundClass* pickUpSoundCue;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UParticleSystem* pickUpParticleSystem;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UStaticMeshComponent* Mesh;

};

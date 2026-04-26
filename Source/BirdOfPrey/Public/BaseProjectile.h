// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

class ABaseGameAgent;
class UPrimitiveComponent;

UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void InitialiseProjectile(FVector direction, float speed);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void DealDamageTo(AActor* damaging, float damageAmount); //Changed damage varibale name because of a conflict with the damage variable in this class.

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnHit(UPrimitiveComponent* overlappedComponent, AActor* otherActor);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AdjustToDesiredZ();

private:
	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float projectileSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float damage;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UParticleSystem* detonationEmitter;

	UPROPERTY(EditAnywhere,Category = "BirdsOfPrey")
	float groundUnitCheckDistance;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float groundUnitCheckAngle;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	ABaseGameAgent* groundTarget;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float desiredZ;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	USoundBase* soundBase;
};

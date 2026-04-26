// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseGameAgent.generated.h"

class UCapsuleComponent;
struct FSAgentInfo;

UENUM(BlueprintType)
enum class EMyAttachmentRule : uint8
{
	KeepRelative UMETA(DisplayName = "Keep Relative"),
	KeepWorld    UMETA(DisplayName = "Keep World"),
	SnapToTarget UMETA(DisplayName = "Snap To Target")
};

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float moveSpeed;
	
	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	UObject* weapon;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UClass* defaultWeaponType;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float health;

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	bool bCheckForOutOfBounds;


	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	float outOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	FName weaponSocketName;


	UPROPERTY(VisibleAnywhere, Category = "BirdsOfPrey")
	FVector targetLocation;


	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	USkeletalMeshComponent* skeletalMesh;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	UCapsuleComponent* capsuleComponent;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	USceneComponent* weaponSpawnOffset;




public: 

	UPROPERTY(EditAnywhere,  Category = "BirdsOfPrey")
	UClass* agentInfo;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	float points;


	// Getter and Setter functions for weapon
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  ChangeWeaponType();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdsOfPrey")
	FTransform GetWeaponSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ApplyAgentInfo(FSAgentInfo newAgentInfo);


	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	virtual float  TakeDamage(float damageAmount);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	bool  IsAlive();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  Died(UObject*	 Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void  AimAt(FVector aimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	FVector  PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	FVector  CheckForOutOfBounds();















};

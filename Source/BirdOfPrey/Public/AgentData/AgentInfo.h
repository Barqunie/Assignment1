#pragma once

#include "CoreMinimal.h"
#include "Engine/SkeletalMesh.h"
#include "Animation/AnimInstance.h"
#include "Engine/Texture2D.h"
#include "AgentInfo.generated.h"

class ABaseWeapon;

USTRUCT(BlueprintType)
struct BIRDOFPREY_API FSAgentInfo
{
	GENERATED_BODY()

public:
	FSAgentInfo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TSubclassOf<ABaseWeapon> WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TSubclassOf<UAnimInstance> AnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	UTexture2D* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float MeshScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FLinearColor Colour;
};
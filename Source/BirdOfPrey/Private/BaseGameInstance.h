// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AgentData/AgentInfo.h"
#include "BaseGameInstance.generated.h"

UCLASS()
class BIRDOFPREY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TArray<FSAgentInfo> PlayerAgentInfo;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SetPlayerAgentInfoFor(int32 PlayerControllerID, const FSAgentInfo& AgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	FSAgentInfo GetPlayerAgentInfo(
		int32 PlayerControllerID,
		UPARAM(DisplayName = "Success") bool& bSuccess
	) const;
};
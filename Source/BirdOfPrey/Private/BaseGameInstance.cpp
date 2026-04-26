// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, const FSAgentInfo& AgentInfo)
{
	// Empty for C++ conversion assignment
}

FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess) const
{
	return FSAgentInfo();
}
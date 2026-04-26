#include "AgentData/AgentInfo.h"

FSAgentInfo::FSAgentInfo()
	: Name(FText::GetEmpty())
	, SkeletalMesh(nullptr)
	, AnimInstance(nullptr)
	, Image(nullptr)
	, Speed(1000.f)
	, Health(250.f)
	, MeshScale(1.f)
	, Colour(FLinearColor::White)
{
}
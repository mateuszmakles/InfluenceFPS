// Copyright Mateusz Makles, 2021 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Faction.generated.h"


UCLASS()
class INFLUENCEFPS_API UFaction : public UObject
{
	GENERATED_BODY()

public:

	enum Name : char
	{
		Army,
		Government,
		Traders,
		Pirates,

		COUNT
	};

	UFaction() = default;

	Name FactionName;
	float Influence;

};
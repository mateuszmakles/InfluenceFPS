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

	//UFaction(const Name& name, float share = 0.f);

	Name FactionName;
	float Influence;

	/*void* operator new(uint64 size)
	{
		void* p = ::new UFaction();

		return p;
	}

	void operator delete(void* p)
	{
		free(p);
	}*/

};
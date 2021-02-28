// Copyright Mateusz Makles, 2021 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Faction.h"
#include "Island.generated.h"

/*USTRUCT()
struct Faction
{
	GENERATED_BODY()

	enum Name : char
	{
		Army,
		Government,
		Traders,
		Pirates,

		COUNT
	};

	Faction() = default;

	Faction(const Faction& faction);

	Faction(const Name& name, float share = 0.f);

	Name FactionName;
	float Influence;

};*/

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INFLUENCEFPS_API UIsland : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UIsland();

private:

	const float MaxInfluence = 100.f;

	UPROPERTY()
	TArray<UFaction*> Factions;

protected:

	float CorrectInfluence(UFaction*& faction);

	void AdjustOthersInfluence(const UFaction::Name& name, float difference);

	void AdjustOthersInfluenceEqually(const UFaction::Name& name, float share);

public:

	UFaction* GetFactionByName(const UFaction::Name& name);

	UFaction* GetFactionByString(const FString& name);

	void DivideInfluenceEqually();

	void SetFactionInfluence(const UFaction::Name& name, float share);

	void AddFactionInfluence(const UFaction::Name& name, float share);

	void AddFaction(const UFaction::Name& name, float share = 0.f);

	void RemoveFaction(const UFaction::Name& name);
};
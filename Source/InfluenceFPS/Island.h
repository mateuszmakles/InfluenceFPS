// Copyright Mateusz Makles, 2021 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Island.generated.h"



USTRUCT()
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

	Name FactionName;
	float Influence;

	Faction(const Faction& faction);

	Faction(const Name& name, float share = 0.f);

	Faction() = default;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INFLUENCEFPS_API UIsland : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UIsland();

private:

	const float MaxInfluence = 100.f;

	TArray<Faction*> Factions;

protected:

	float CorrectInfluence(Faction*& faction);

	void AdjustOthersInfluence(const Faction::Name& name, float difference);

	void AdjustOthersInfluenceEqually(const Faction& faction);
	void AdjustOthersInfluenceEqually(const Faction::Name& name, float share);

public:

	Faction* GetFactionByName(const Faction::Name& name);

	Faction* GetFactionByString(const FString& name);


	void DivideInfluenceEqually();


	void SetFactionInfluence(const Faction& faction);

	void SetFactionInfluence(const Faction::Name& name, float share);


	void AddFaction(const Faction& faction);

	void AddFaction(const Faction::Name& name, float share);


	void RemoveFaction(const Faction::Name& name);
};
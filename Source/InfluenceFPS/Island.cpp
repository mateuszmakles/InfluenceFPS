// Copyright Mateusz Makles, 2021 All Rights Reserved.


#include "Island.h"

/*Faction::Faction(const UFaction& faction)
	: FactionName{ faction.FactionName }, Influence{ faction.Influence }
{

}

Faction::Faction(const Name& name, float share)
	: FactionName{ name }, Influence{ share }
{

}*/

UIsland::UIsland()
{
	PrimaryComponentTick.bCanEverTick = false;
}

UFaction* UIsland::GetFactionByName(const UFaction::Name& name)
{
	for (auto& element : Factions)
	{
		if (element->FactionName == name)
			return element;
	}

	return nullptr;
}

UFaction* UIsland::GetFactionByString(const FString& name)
{
	UFaction::Name FactionName;

	if (name == "Army")
		FactionName = UFaction::Army;
	else if (name == "Government")
		FactionName = UFaction::Government;
	else if (name == "Traders")
		FactionName = UFaction::Traders;
	else if (name == "Pirates")
		FactionName = UFaction::Pirates;

	return GetFactionByName(FactionName);
}

float UIsland::CorrectInfluence(UFaction*& faction)
{
	float Difference = 0;

	if (faction->Influence > MaxInfluence)
	{
		Difference = faction->Influence - MaxInfluence;
		faction->Influence = MaxInfluence;
	}
	else if (faction->Influence < 0)
	{
		Difference = faction->Influence;
		faction->Influence = 0;
	}

	return Difference;
}

void UIsland::DivideInfluenceEqually()
{
	if (Factions.Num() > 0)
	{
		for (auto& element : Factions)
		{
			element->Influence = MaxInfluence / Factions.Num();
		}
	}
}

void UIsland::SetFactionInfluence(const UFaction::Name& name, float share)
{
	auto OurFaction = GetFactionByName(name);

	if (OurFaction)
	{
		float Difference = OurFaction->Influence;
		OurFaction->Influence = share;

		CorrectInfluence(OurFaction);

		if (Factions.Num() > 1)
		{
			Difference -= OurFaction->Influence;
			AdjustOthersInfluence(OurFaction->FactionName, Difference);
		}
	}
}

void UIsland::AdjustOthersInfluence(const UFaction::Name& name, float difference)
{
	float Difference = 0;

	do
	{
		for (auto& element : Factions)
		{
			if (element->FactionName != name)
			{
				element->Influence += difference / (Factions.Num() - 1) + Difference;
				Difference = CorrectInfluence(element);
			}
		}

		difference = 0;

	} while (Difference < 0);
}

void UIsland::AdjustOthersInfluenceEqually(const UFaction::Name& name, float share)
{
	for (auto& element : Factions)
	{
		if (element->FactionName != name)
		{
			element->Influence = (MaxInfluence - share) / (Factions.Num() - 1);
		}
	}
}

void UIsland::AddFaction(const UFaction::Name& name, float share)
{
	if (Factions.Num() == 0)
	{
		Factions.Add(NewObject<UFaction>(this));
		Factions.Last()->FactionName = name;
		Factions.Last()->Influence = MaxInfluence;
	}
	else
	{
		if (GetFactionByName(name))
		{
			return;
		}

		Factions.Add(NewObject<UFaction>(this));
		Factions.Last()->FactionName = name;
		Factions.Last()->Influence = share;

		CorrectInfluence(Factions.Last());

		if (Factions.Num() > 1)
		{
			AdjustOthersInfluence(Factions.Last()->FactionName, -Factions.Last()->Influence);
		}
	}
}

void UIsland::RemoveFaction(const UFaction::Name& name)
{
	auto OurFaction = GetFactionByName(name);

	if (OurFaction)
	{
		AdjustOthersInfluence(OurFaction->FactionName, OurFaction->Influence);

		//delete OurFaction;

		Factions.Remove(OurFaction);
		Factions.Shrink();
	}
}
// Copyright Mateusz Makles, 2021 All Rights Reserved.


#include "Island.h"

Faction::Faction(const Faction& faction)
	: FactionName{ faction.FactionName }, Influence{ faction.Influence }
{

}

Faction::Faction(const Name& name, float share)
	: FactionName{ name }, Influence{ share }
{

}

UIsland::UIsland()
{
	PrimaryComponentTick.bCanEverTick = false;
}

Faction* UIsland::GetFactionByName(const Faction::Name& name)
{
	for (auto& element : Factions)
	{
		if (element->FactionName == name)
			return element;
	}

	return nullptr;
}

Faction* UIsland::GetFactionByString(const FString& name)
{
	Faction::Name FactionName;

	if (name == "Army")
		FactionName = Faction::Army;
	else if (name == "Government")
		FactionName = Faction::Government;
	else if (name == "Traders")
		FactionName = Faction::Traders;
	else if (name == "Pirates")
		FactionName = Faction::Pirates;

	return GetFactionByName(FactionName);
}

float UIsland::CorrectInfluence(Faction*& faction)
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

void UIsland::SetFactionInfluence(const Faction& faction)
{
	auto OurFaction = GetFactionByName(faction.FactionName);

	if (OurFaction)
	{
		float Difference = OurFaction->Influence;
		OurFaction->Influence = faction.Influence;

		CorrectInfluence(OurFaction);

		if (Factions.Num() > 1)
		{
			Difference -= OurFaction->Influence;
			AdjustOthersInfluence(OurFaction->FactionName, Difference);
		}
	}
}

void UIsland::SetFactionInfluence(const Faction::Name& name, float share)
{
	SetFactionInfluence(Faction(name, share));
}

void UIsland::AdjustOthersInfluence(const Faction::Name& name, float difference)
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

void UIsland::AdjustOthersInfluenceEqually(const Faction& faction)
{
	for (auto& element : Factions)
	{
		if (element->FactionName != faction.FactionName)
		{
			element->Influence = (MaxInfluence - faction.Influence) / (Factions.Num() - 1);
		}
	}
}

void UIsland::AdjustOthersInfluenceEqually(const Faction::Name& name, float share)
{
	AdjustOthersInfluenceEqually(Faction(name, share));
}

void UIsland::AddFaction(const Faction& faction)
{
	if (Factions.Num() == 0)
	{
		Factions.Add(new Faction(faction.FactionName, 100.f));
	}
	else
	{
		if (GetFactionByName(faction.FactionName))
		{
			return;
		}

		Factions.Add(new Faction(faction));

		CorrectInfluence(Factions.Last());

		if (Factions.Num() > 1)
		{
			AdjustOthersInfluence(Factions.Last()->FactionName, -Factions.Last()->Influence);
		}
	}
}

void UIsland::AddFaction(const Faction::Name& name, float share)
{
	AddFaction(Faction(name, share));
}

void UIsland::RemoveFaction(const Faction::Name& name)
{
	auto OurFaction = GetFactionByName(name);

	if (OurFaction)
	{
		AdjustOthersInfluence(OurFaction->FactionName, OurFaction->Influence);

		delete OurFaction;

		Factions.Remove(OurFaction);
		Factions.Shrink();
	}
}
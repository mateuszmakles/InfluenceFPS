// Copyright Epic Games, Inc. All Rights Reserved.

#include "InfluenceFPSGameMode.h"
#include "InfluenceFPSHUD.h"
#include "InfluenceFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInfluenceFPSGameMode::AInfluenceFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInfluenceFPSHUD::StaticClass();
}

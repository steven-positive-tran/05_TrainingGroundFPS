// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "S05_TG_FPSGameMode.h"
#include "S05_TG_FPSHUD.h"
#include "S05_TG_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_TG_FPSGameMode::AS05_TG_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TG_FPSHUD::StaticClass();
}

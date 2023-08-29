// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParkourGameMode.h"
#include "ParkourCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParkourGameMode::AParkourGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

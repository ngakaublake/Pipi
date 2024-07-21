// Copyright Epic Games, Inc. All Rights Reserved.

#include "PIPI_RapidWeek1GameMode.h"
#include "PIPI_RapidWeek1Character.h"
#include "UObject/ConstructorHelpers.h"

APIPI_RapidWeek1GameMode::APIPI_RapidWeek1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "T3DEagleTestGameMode.h"
#include "T3DEagleTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AT3DEagleTestGameMode::AT3DEagleTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

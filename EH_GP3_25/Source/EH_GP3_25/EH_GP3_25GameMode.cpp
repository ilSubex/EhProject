// Copyright Epic Games, Inc. All Rights Reserved.

#include "EH_GP3_25GameMode.h"
#include "EH_GP3_25Character.h"
#include "UObject/ConstructorHelpers.h"

AEH_GP3_25GameMode::AEH_GP3_25GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "FractalsGameMode.h"
#include "FractalsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFractalsGameMode::AFractalsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

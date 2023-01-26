// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealAutomatedTestsGameMode.h"
#include "UnrealAutomatedTestsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealAutomatedTestsGameMode::AUnrealAutomatedTestsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

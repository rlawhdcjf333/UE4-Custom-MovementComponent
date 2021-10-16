// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectNameNone/Public/ProjectNameNoneGameMode.h"
#include "UObject/ConstructorHelpers.h"

AProjectNameNoneGameMode::AProjectNameNoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

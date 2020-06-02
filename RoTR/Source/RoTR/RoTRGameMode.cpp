// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RoTRGameMode.h"
#include "RoTRCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoTRGameMode::ARoTRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/Blueprints/Character/Player/RoTRPlayer_BP'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

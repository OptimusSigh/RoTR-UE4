// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RoTRGameMode.h"
#include "RoTRCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoTRGameMode::ARoTRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = RoTRPlayer_BP.Class;
	}
}

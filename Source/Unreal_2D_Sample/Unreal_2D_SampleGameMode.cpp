// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Unreal_2D_SampleGameMode.h"
#include "Unreal_2D_SampleCharacter.h"

AUnreal_2D_SampleGameMode::AUnreal_2D_SampleGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AUnreal_2D_SampleCharacter::StaticClass();	
}

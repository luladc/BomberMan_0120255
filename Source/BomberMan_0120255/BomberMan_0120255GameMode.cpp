// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_0120255GameMode.h"
#include "BomberMan_0120255Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bomba.h"
#include "Bloque.h"
#include "Subscriptor.h"
#include "Publicador.h"
#include "GestorDificultad.h"


ABomberMan_0120255GameMode::ABomberMan_0120255GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_0120255GameMode::BeginPlay()
{
	Super::BeginPlay();


	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	DifficultyManager = GetWorld()->SpawnActor<AGestorDificultad>(AGestorDificultad::StaticClass());

	int32 RandomDifficulty = FMath::RandRange(0, 2);
	switch (RandomDifficulty)
	{
	case 0:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Dificultad Facil"));
		DifficultyManager->EasyDifficultyOperation();
		break;
	case 1:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Dificultad Media"));
		DifficultyManager->MediumDifficultyOperation();
		break;
	case 2:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Dificultad Dificil"));
		DifficultyManager->ExtremeDifficultyOperation();
		break;
	default:
		break;
	
	}

}
//
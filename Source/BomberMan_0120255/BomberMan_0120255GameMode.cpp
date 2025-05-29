// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_0120255GameMode.h"
#include "BomberMan_0120255Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueRaro.h"
#include "LaberintoConcreto.h"
#include "LaberintoConcreto2.h"
#include "LaberintoConcreto3.h"
#include "Laberinto.h"
#include "ILaberintoBuilder.h"
#include "PuertaTransportadora.h"
#include "Obstaculo.h"
#include "Director.h"
#include "Enemigo.h"
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

	//BuilderLab2 = GetWorld()->SpawnActor<ALaberintoConcreto2>(ALaberintoConcreto2::StaticClass());
	//DirectorLab = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	//DirectorLab->EstablecerILaberintoBuilder(BuilderLab2);
	//DirectorLab->ConstruirLaberinto();
   //ALaberinto* Laberinto = DirectorLab->GetLaberinto();


	//AEnemigo* EnemigoReferencia = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	//AActor* clonenemigo = EnemigoReferencia->Clonar();

	//ABloqueRaro* BloqueReferencia = GetWorld()->SpawnActor<ABloqueRaro>(ABloqueRaro::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	//AActor* clonbloque = BloqueReferencia->Clonar();

	// Generar el enemigo original y 5 clones
    // Crear enemigo base
    //AEnemigo* EnemigoReferencia = GetWorld()->SpawnActor<AEnemigo>(
        //AEnemigo::StaticClass(),
        //FVector(0.0f, 0.0f, 100.0f),
        //FRotator::ZeroRotator);

    // Verifica que el enemigo se haya creado correctamente

	// Crea el enemigo base (prototipo)
	//FVector BaseLocation = FVector(-500.0f, -20.0f, 290.0f);
	//FRotator SpawnRotation = FRotator::ZeroRotator;
	//
	//AEnemigo* EnemigoReferencia = GetWorld()->SpawnActor<AEnemigo>(
	//	AEnemigo::StaticClass(),
	//	BaseLocation,
	//	SpawnRotation);
	//
	//// Verifica que se creó correctamente
	//if (EnemigoReferencia)
	//{
	//	// Clona el enemigo 5 veces
	//	for (int32 i = 0; i < 5; i++)
	//	{
	//		FVector SpawnLocation = BaseLocation + FVector(i * 200.0f, 0.0f, 0.0f);
	//		AActor* Clon = EnemigoReferencia->Clonar(SpawnLocation);
	//	}
	//}

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
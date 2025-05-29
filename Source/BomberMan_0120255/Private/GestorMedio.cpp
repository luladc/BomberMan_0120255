// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorMedio.h"
#include "Enemigo.h"
#include "LaberintoConcreto2.h"
#include "ILaberintoBuilder.h"
#include "Director.h"
#include "Laberinto.h"

// Sets default values
AGestorMedio::AGestorMedio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGestorMedio::BeginPlay()
{
	Super::BeginPlay();

    // Crea el enemigo base (prototipo)
    FVector BaseLocation = FVector(-500.0f, -20.0f, 290.0f);
    FRotator SpawnRotation = FRotator::ZeroRotator;

    AEnemigo* EnemigoReferencia = GetWorld()->SpawnActor<AEnemigo>(
        AEnemigo::StaticClass(),
        BaseLocation,
        SpawnRotation);

    // Verifica que se creó correctamente
    if (EnemigoReferencia)
    {
        // Clona el enemigo 5 veces
        for (int32 i = 0; i < 3; i++)
        {
            FVector SpawnLocation = BaseLocation + FVector(i * 200.0f, 0.0f, 0.0f);
            AActor* Clon = EnemigoReferencia->Clonar(SpawnLocation);
        }
    }
	
}

// Called every frame
void AGestorMedio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorMedio::EnemyLife()
{
    if (GEngine)
    {
        // Enemigo -> SetEnemyLife(EnemyLifeMedium);

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeMedium));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
    }
}

void AGestorMedio::CargarLaberinto()
{
    BuilderLab2 = GetWorld()->SpawnActor<ALaberintoConcreto2>(ALaberintoConcreto2::StaticClass());
    DirectorLab2 = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
    DirectorLab2->EstablecerILaberintoBuilder(BuilderLab2);
    DirectorLab2->ConstruirLaberinto();
    ALaberinto* Laberinto = DirectorLab2->GetLaberinto();
}


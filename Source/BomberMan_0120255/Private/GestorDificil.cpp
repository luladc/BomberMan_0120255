// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorDificil.h"
#include "Enemigo.h"
#include "LaberintoConcreto3.h"
#include "ILaberintoBuilder.h"
#include "Director.h"
#include "Bomba.h"
#include "Bloque.h"
#include "Subscriptor.h"
#include "Publicador.h"
#include "Laberinto.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AGestorDificil::AGestorDificil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGestorDificil::BeginPlay()
{
	Super::BeginPlay();

     CargarLaberinto();
     EnemyLife();
     CargarEnemigos();

	 // Crear bomba y guardarla
	 FVector PosicionBomba = FVector(1200, 2000, 20);
	 ABomba* BombaCreada = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), PosicionBomba, FRotator::ZeroRotator);

	 // Verifica que se haya creado correctamente
	 if (!BombaCreada)
	 {
		 UE_LOG(LogTemp, Warning, TEXT("No se pudo crear la bomba"));
		 return;
	 }

	 TArray<AActor*> Laberintos;
	 UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALaberintoConcreto3::StaticClass(), Laberintos);

	 if (Laberintos.Num() > 0)
	 {
		 ALaberintoConcreto3* LaberintoRef = Cast<ALaberintoConcreto3>(Laberintos[0]);

		 if (LaberintoRef)
		 {
			 const TArray<ABloque*>& Bloques = LaberintoRef->GetBloquesGenerados();
			 // Usar bloques aquí
			 for (ABloque* Bloque : Bloques)
			 {
				 if (Bloque)
				 {
					 // Asignar la bomba al bloque
					 Bloque->SetBomba(BombaCreada);
					 // Suscribirse a la bomba
					 BombaCreada->Subscribir(Bloque);
				 }
			 }
		 }
	 }
}

// Called every frame
void AGestorDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorDificil::EnemyLife()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyLife(EnemyLifeExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}
}

void AGestorDificil::CargarLaberinto()
{
    BuilderLab3 = GetWorld()->SpawnActor<ALaberintoConcreto3>(ALaberintoConcreto3::StaticClass());
    DirectorLab3 = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
    DirectorLab3->EstablecerILaberintoBuilder(BuilderLab3);
    DirectorLab3->ConstruirLaberinto();
	ALaberintoConcreto3* Lab3Concreto = Cast<ALaberintoConcreto3>(BuilderLab3);
    ALaberinto* Laberinto = DirectorLab3->GetLaberinto();
	if (Lab3Concreto)
	{
		aBloques = Lab3Concreto->GetBloquesGenerados();
	}
	
}

void AGestorDificil::CargarEnemigos()
{
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
        for (int32 i = 0; i < 5; i++)
        {
            FVector SpawnLocation = BaseLocation + FVector(i * 200.0f, 0.0f, 0.0f);
            AActor* Clon = EnemigoReferencia->Clonar(SpawnLocation);
        }
    }
}


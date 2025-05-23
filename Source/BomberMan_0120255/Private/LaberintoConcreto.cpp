// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto.h"
#include "Bloque.h"
#include "BloqueBurbuja.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueAgua.h"
#include "BloqueHielo.h"
#include "BloqueOro.h"
#include "BloquePasto.h"
#include "BloqueVidrio.h"
#include "Laberinto.h"
#include "PuertaTransportadora.h"
#include "Obstaculo.h"

// Sets default values
ALaberintoConcreto::ALaberintoConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
		// Mapeo tipo clase de bloque
		MapaDeBloques.Add(1, ABloqueMadera::StaticClass());
		MapaDeBloques.Add(2, ABloqueConcreto::StaticClass());
		MapaDeBloques.Add(4, ABloqueAcero::StaticClass());
		MapaDeBloques.Add(3, ABloqueLadrillo::StaticClass());
		MapaDeBloques.Add(6, ABloqueOro::StaticClass());
		MapaDeBloques.Add(5, ABloquePasto::StaticClass());

		MapaDeObstaculos.Add(8, AObstaculo::StaticClass());

		MapaDePuertas.Add(7, APuertaTransportadora::StaticClass());


}

// Called when the game starts or when spawned
void ALaberintoConcreto::BeginPlay()
{
	Super::BeginPlay();

	   Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());

}

// Called every frame
void ALaberintoConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ALaberintoConcreto::ConstruirMuros()
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			if (MapaDeBloques.Contains(4) && Tipo != 0)
			{
				FVector Posicion(Laberinto->XInicial + i * 200, Laberinto->YInicial + j * 200, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[4], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirBloques()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];

			if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
			{
				FVector Posicion(Laberinto->XInicial + i * 200, Laberinto->YInicial + j * 200, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirObstaculos()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaObstaculos.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaObstaculos[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaObstaculos[i][j];

			if (Tipo == 8 && Tipo != 0 )
			{
				FVector Posicion(Laberinto->XInicial + i * 200, Laberinto->YInicial + j * 200, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeObstaculos[8], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}
void ALaberintoConcreto::ConstruirPuertas()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaPuertas.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaPuertas[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaPuertas[i][j];

			if (Tipo == 7 && Tipo != 0)
			{
				FVector Posicion(Laberinto->XInicial + i * 200, Laberinto->YInicial + j * 200, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDePuertas[7], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

ALaberinto* ALaberintoConcreto::GetLaberinto()
{
	//Returns the Lodging Actor of the Builder (this)
	return Laberinto;
}


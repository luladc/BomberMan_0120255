// Fill out your copyright notice in the Description page of Project Settings.


#include "Laberinto2Concreto.h"
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
#include "Laberinto2.h"
#include "PuertaTransportadora.h"
#include "Obstaculo.h"

// Sets default values
ALaberinto2Concreto::ALaberinto2Concreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MapaDeBloques2.Add(1, ABloqueHielo::StaticClass());
	MapaDeBloques2.Add(2, ABloqueConcreto::StaticClass());
	MapaDeBloques2.Add(4, ABloqueAcero::StaticClass());
	MapaDeBloques2.Add(3, ABloqueAgua::StaticClass());
	MapaDeBloques2.Add(6, ABloqueVidrio::StaticClass());
	MapaDeBloques2.Add(5, ABloqueBurbuja::StaticClass());

	MapaDeObstaculos2.Add(8, AObstaculo::StaticClass());

	MapaDePuertas2.Add(7, APuertaTransportadora::StaticClass());


}

// Called when the game starts or when spawned
void ALaberinto2Concreto::BeginPlay()
{
	Super::BeginPlay();
	Laberinto2 = GetWorld()->SpawnActor<ALaberinto2>(ALaberinto2::StaticClass());
	
}

// Called every frame
void ALaberinto2Concreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberinto2Concreto::ConstruirMuros()
{
	if (!Laberinto2) return;
	for (int32 i = 0; i < Laberinto2->aMapaBloques2.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto2->aMapaBloques2[i].Num(); j++)
		{
			int32 Tipo = Laberinto2->aMapaBloques2[i][j];
			if (MapaDeBloques2.Contains(4) && Tipo != 0)
			{
				FVector Posicion(Laberinto2->XInicial + i * 200, Laberinto2->YInicial + j * 200, Laberinto2->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques2[4], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto2Concreto::ConstruirBloques()
{
	if (!Laberinto2) return;

	for (int32 i = 0; i < Laberinto2->aMapaBloques2.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto2->aMapaBloques2[i].Num(); j++)
		{
			int32 Tipo = Laberinto2->aMapaBloques2[i][j];

			if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
			{
				FVector Posicion(Laberinto2->XInicial + i * 200, Laberinto2->YInicial + j * 200, Laberinto2->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques2[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto2Concreto::ConstruirObstaculos()
{
	if (!Laberinto2) return;

	for (int32 i = 0; i < Laberinto2->aMapaObstaculos2.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto2->aMapaObstaculos2[i].Num(); j++)
		{
			int32 Tipo = Laberinto2->aMapaObstaculos2[i][j];

			if (Tipo == 8 && Tipo != 0)
			{
				FVector Posicion(Laberinto2->XInicial + i * 200, Laberinto2->YInicial + j * 200, Laberinto2->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeObstaculos2[8], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}
void ALaberinto2Concreto::ConstruirPuertas()
{
	if (!Laberinto2) return;

	for (int32 i = 0; i < Laberinto2->aMapaPuertas2.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto2->aMapaPuertas2[i].Num(); j++)
		{
			int32 Tipo = Laberinto2->aMapaPuertas2[i][j];

			if (Tipo == 7 && Tipo != 0)
			{
				FVector Posicion(Laberinto2->XInicial + i * 200, Laberinto2->YInicial + j * 200, Laberinto2->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDePuertas2[7], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}
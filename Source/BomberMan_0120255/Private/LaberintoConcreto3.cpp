// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto3.h"
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
#include "PuertaTransportadora.h"
#include "Obstaculo.h"
#include "Laberinto.h"

// Sets default values
ALaberintoConcreto3::ALaberintoConcreto3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	aMapaBloques = {
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 4},
    {4, 2, 3, 6, 1, 2, 6, 0, 5, 0, 6, 0, 3, 2, 1, 0, 6, 0, 2, 4},
    {4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 4},
    {4, 3, 1, 2, 5, 0, 0, 5, 6, 0, 5, 0, 1, 0, 2, 3, 5, 0, 2, 4},
    {4, 0, 0, 2, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4},
    {4, 1, 5, 0, 2, 0, 6, 0, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4},
    {4, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 6, 0, 0, 2, 0, 1, 0, 0, 4},
    {4, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 4},
    {4, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4},
    {4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 4},
    {4, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 5, 0, 0, 0, 4},
    {4, 0, 1, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4},
    {4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 5, 0, 0, 3, 0, 0, 0, 0, 0, 4},
    {4, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 3, 0, 0, 0, 4},
    {4, 2, 0, 5, 0, 5, 0, 0, 6, 2, 0, 0, 0, 0, 5, 3, 5, 0, 1, 4},
    {4, 0, 0, 5, 0, 0, 2, 0, 0 ,1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4},
    {4, 5, 2, 0, 3, 0, 0, 1, 5, 0, 0, 1, 3, 0, 0, 0, 2, 3, 1, 4},
    {4, 1, 0, 5, 0, 3, 0, 1, 0, 2, 0, 0, 0, 3, 0, 0, 6, 0, 0, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	aMapaPuertas = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0}
	};

	aMapaObstaculos = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 8, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0}
	};

	MapaDeBloques.Add(1, ABloqueVidrio::StaticClass());
	MapaDeBloques.Add(2, ABloqueBurbuja::StaticClass());
	MapaDeBloques.Add(4, ABloqueAcero::StaticClass());
	MapaDeBloques.Add(3, ABloqueAgua::StaticClass());
	MapaDeBloques.Add(6, ABloqueConcreto::StaticClass());
	MapaDeBloques.Add(5, ABloqueHielo::StaticClass());

	MapaDeObstaculos.Add(8, AObstaculo::StaticClass());

	MapaDePuertas.Add(7, APuertaTransportadora::StaticClass());

}

// Called when the game starts or when spawned
void ALaberintoConcreto3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoConcreto3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoConcreto3::ConstruirMuros()
{
	for (int32 i = 0; i < aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = aMapaBloques[i][j];
			if (MapaDeBloques.Contains(4) && Tipo != 0)
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				ABloque* BloqueCreado = Cast<ABloque>(GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator));
				if (BloqueCreado)
				{
					BloquesGenerados.Add(BloqueCreado);
				}
			}
		}
	}
}

void ALaberintoConcreto3::ConstruirBloques()
{
	for (int32 i = 0; i < aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = aMapaBloques[i][j];

			if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				ABloque* BloqueCreado = Cast<ABloque>(GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator));
				if (BloqueCreado)
				{
					BloquesGenerados.Add(BloqueCreado);
				}
			}
		}
	}
}

void ALaberintoConcreto3::ConstruirObstaculos()
{
	for (int32 i = 0; i < aMapaObstaculos.Num(); i++)
	{
		for (int32 j = 0; j < aMapaObstaculos[i].Num(); j++)
		{
			int32 Tipo = aMapaObstaculos[i][j];

			if (Tipo == 8 && Tipo != 0)
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeObstaculos[8], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}
void ALaberintoConcreto3::ConstruirPuertas()
{

	for (int32 i = 0; i < aMapaPuertas.Num(); i++)
	{
		for (int32 j = 0; j < aMapaPuertas[i].Num(); j++)
		{
			int32 Tipo = aMapaPuertas[i][j];

			if (Tipo == 7 && Tipo != 0)
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDePuertas[7], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

ALaberinto* ALaberintoConcreto3::GetLaberinto()
{
	//Returns the Lodging Actor of the Builder (this)
	return Laberinto;
}
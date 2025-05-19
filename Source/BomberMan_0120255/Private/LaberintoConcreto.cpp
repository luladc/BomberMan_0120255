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
		MapaDeBloques.Add(5, ABloqueBurbuja::StaticClass());
		MapaDeBloques.Add(6, ABloqueVidrio::StaticClass());
		MapaDeBloques.Add(7, ABloqueAgua::StaticClass());
		MapaDeBloques.Add(8, ABloqueHielo::StaticClass());
		MapaDeBloques.Add(9, ABloquePasto::StaticClass());
		MapaDeBloques.Add(10, ABloqueOro::StaticClass());

		MapaDeObstaculos.Add(11, AObstaculo::StaticClass());

		MapaDePuertas.Add(12, APuertaTransportadora::StaticClass());


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
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
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

			if (Tipo != 0 && Tipo != 4)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
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

			if (Tipo == 11 )
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeObstaculos[Tipo], Posicion, FRotator::ZeroRotator);
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

			if (Tipo == 12)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDePuertas[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::LaberintoCompleto()
{
	ConstruirBloques();
	ConstruirMuros();
	ConstruirObstaculos();
	ConstruirPuertas();
}


/*void ALaberintoConcreto::ConstruirBloques(TArray<TArray<int32>>& Mapa, int32 TipoBloque, TSubclassOf<AActor> ClaseBloque)
{
    if (!Laberinto) return;

    for (int32 i = 0; i < Mapa.Num(); i++)
    {
        for (int32 j = 0; j < Mapa[i].Num(); j++)
        {
            if (Mapa[i][j] == TipoBloque)
            {
                FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
                GetWorld()->SpawnActor<AActor>(ClaseBloque, Posicion, FRotator::ZeroRotator);
            }
        }
    }
}

void ALaberintoConcreto::ConstruirPuertas(TArray<TArray<int32>>& Mapa, int32 TipoPuerta, TSubclassOf<AActor> ClasePuerta)
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Mapa.Num(); i++)
	{
		for (int32 j = 0; j < Mapa[i].Num(); j++)
		{
			if (Mapa[i][j] == TipoPuerta)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(ClasePuerta, Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirObstaculos(TArray<TArray<int32>>& Mapa, int32 TipoObstaculo, TSubclassOf<AActor> ClaseObstaculo)
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Mapa.Num(); i++)
	{
		for (int32 j = 0; j < Mapa[i].Num(); j++)
		{
			if (Mapa[i][j] == TipoObstaculo)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(ClaseObstaculo, Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::LaberintoCompleto()
{
    if (!Laberinto) return;

    // Mapa de bloques (madera, concreto, acero, ladrillo)
    ConstruirBloques(Laberinto->aMapaBloques, 1, ABloqueMadera::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 2, ABloqueConcreto::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 3, ABloqueAcero::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 4, ABloqueLadrillo::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 5, ABloqueBurbuja::StaticClass());
    ConstruirBloques(Laberinto->aMapaBloques, 6, ABloqueVidrio::StaticClass());
	ConstruirBloques(Laberinto->aMapaBloques, 7, ABloqueAgua::StaticClass());
	ConstruirBloques(Laberinto->aMapaBloques, 8, ABloqueHielo::StaticClass());
	ConstruirBloques(Laberinto->aMapaBloques, 9, ABloquePasto::StaticClass());
	ConstruirBloques(Laberinto->aMapaBloques, 10, ABloqueOro::StaticClass());

    ConstruirObstaculos(Laberinto->aMapaObstaculos, 11, AObstaculo::StaticClass());
    ConstruirPuertas(Laberinto->aMapaPuertas, 12, APuertaTransportadora::StaticClass());

}*/



/*void ALaberintoConcreto::BuildWoods()
{
	if (Laberinto)
	{
		for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = Laberinto->aMapaBloques[i][j];
				if (tipoBloque!= 0 && tipoBloque != 4) {
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial), FRotator::ZeroRotator);
				}
			}
		}
	}
	else if (MazeTest)
	{
		for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType != 4) {
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial), FRotator::ZeroRotator);
				}
			}
		}
	}

}

void AMaze_BuilderConcrete::BuildConcrete()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType == 4) {
					GetWorld()->SpawnActor<ABloqueConcreto>(
						ABloqueConcreto::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildSteel()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType != 4) {
					GetWorld()->SpawnActor<ABloqueAcero>(
						ABloqueAcero::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildBrick()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType != 4) {
					GetWorld()->SpawnActor<ABloqueLadrillo>(
						ABloqueLadrillo::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildPuertas()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaPuertas.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaPuertas[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaPuertas[i][j];
				if (BlockType == 6) {
					GetWorld()->SpawnActor<ABala>(
						ABala::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildVidrios()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaVidrios.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaVidrios[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaVidrios[i][j];
				if (BlockType == 5) {
					GetWorld()->SpawnActor<ABloqueBurbuja>(
						ABloqueBurbuja::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::FullMaze()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType == 1) {
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial), FRotator::ZeroRotator);
				}
				else if (BlockType == 2) {
					GetWorld()->SpawnActor<ABloqueConcreto>(
						ABloqueConcreto::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
				else if (BlockType == 3) {
					GetWorld()->SpawnActor<ABloqueAcero>(
						ABloqueAcero::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
				else if (BlockType == 4) {
					GetWorld()->SpawnActor<ABloqueLadrillo>(
						ABloqueLadrillo::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}*/
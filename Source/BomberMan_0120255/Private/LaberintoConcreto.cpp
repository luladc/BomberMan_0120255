// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto.h"
#include "Bloque.h"
#include "IBloque.h"
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
		
	aMapaBloques = {
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{4, 0, 0, 0, 1, 0, 0, 5, 0, 0, 3, 0, 0, 0, 6, 0, 0, 4},
	{4, 2, 3, 6, 1, 2, 0, 5, 0, 6, 3, 2, 1, 0, 6, 0, 2, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 1, 0, 0, 0, 0, 4},
	{4, 3, 1, 2, 5, 0, 5, 6, 0, 5, 1, 0, 2, 3, 5, 0, 2, 4},
	{4, 0, 0, 2, 0, 2, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 4},
	{4, 1, 5, 0, 2, 0, 0, 6, 2, 0, 0, 0, 0, 0, 0, 0, 5, 4},
	{4, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0, 4},
	{4, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 4},
	{4, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 4},
	{4, 0, 1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4},
	{4, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4},
	{4, 2, 0, 5, 0, 5, 0, 6, 2, 0, 0, 0, 5, 3, 0, 0, 1, 4},
	{4, 1, 0, 5, 0, 3, 1, 0, 2, 0, 0, 3, 0, 0, 6, 0, 0, 4},
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	aMapaPuertas = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0}
	};

	aMapaObstaculos = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0}
	};

	MapaDeBloques.Add(1, ABloqueMadera::StaticClass());
	MapaDeBloques.Add(2, ABloqueConcreto::StaticClass());
	MapaDeBloques.Add(4, ABloqueAcero::StaticClass());
	MapaDeBloques.Add(3, ABloqueLadrillo::StaticClass());
	MapaDeBloques.Add(6, ABloqueAgua::StaticClass());
	MapaDeBloques.Add(5, ABloquePasto::StaticClass());

	MapaDeObstaculos.Add(8, AObstaculo::StaticClass());

	MapaDePuertas.Add(7, APuertaTransportadora::StaticClass());
}

// Called when the game starts or when spawned
void ALaberintoConcreto::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALaberintoConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ALaberintoConcreto::ConstruirMuros()
{
	for (int32 i = 0; i < aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = aMapaBloques[i][j];
			if (MapaDeBloques.Contains(4) && Tipo != 0)
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaDeBloques[4], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoConcreto::ConstruirBloques()
{
	//for (int32 i = 0; i < aMapaBloques.Num(); i++)
	//{
	//	for (int32 j = 0; j < aMapaBloques[i].Num(); j++)
	//	{
	//		int32 Tipo = aMapaBloques[i][j];
	//
	//		if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
	//		{
	//			FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
	//			GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
	//		}
	//	}
	//}
	ConstruirMitadDerecha();
	ClonarMitadIzquierda();
}



void ALaberintoConcreto::ConstruirObstaculos()
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
void ALaberintoConcreto::ConstruirPuertas()
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

ALaberinto* ALaberintoConcreto::GetLaberinto()
{
	//Returns the Maze Actor of the Builder (this)
	return Laberinto;
}

void ALaberintoConcreto::ConstruirMitadDerecha()
{
	int32 Columnas = aMapaBloques[0].Num();
	//este metodo obtiene el número total de columnas del laberinto desde la primera fila(aMapaBloques[0]).
    //aMapaBloques es una matriz 2D(lista de listas), donde cada celda representa un bloque.
    //Esto es necesario para saber dónde empieza la "mitad derecha".
	int32 Mitad = Columnas / 2;
	//Calcula la columna inicial de la mitad derecha(la mitad del mapa).

	int32 NumTiposDisponibles = 6; // tipos de 1 a 6
	//Define que hay 6 tipos de bloques diferentes (excluyendo el tipo 0, que representa vacío).
	float ProbabilidadDeEspacio = 0.25f; // 25% de que el bloque sea vacío
	
	//Establece que hay un 25 % de probabilidad de que una celda quede vacía(sin bloque).
    //Se usa para que el laberinto tenga espacios por los que se pueda caminar.

	for (int32 i = 0; i < aMapaBloques.Num(); i++)
	{
		for (int32 j = Mitad; j < Columnas; j++)
			//Recorre solo la mitad derecha de cada fila(desde Mitad hasta el final).
		{
			int32 Tipo;

			if (FMath::FRand() < ProbabilidadDeEspacio)
				//Usa FMath::FRand() (que da un valor aleatorio entre 0 y 1) para decidir si se deja vacío.
				//Si el número aleatorio es menor que 0.25, el bloque será vacío(Tipo = 0).
			{
				Tipo = 0; // espacio vacío
			}
			else
				//Si no se deja vacío, se elige un tipo de bloque aleatorio entre 1 y 6.
			{
				Tipo = FMath::RandRange(1, NumTiposDisponibles); // tipo de bloque válido
			}

			aMapaBloques[i][j] = Tipo;
			//Guarda el tipo del bloque (o 0 si es vacío) en la matriz aMapaBloques, para referencia o clonación futura

			if (Tipo != 0)
				//Solo se crea un actor si el bloque no es vacío.
			{
				FVector Posicion(XInicial + i * 200, YInicial + j * 200, ZInicial);
				//Calcula la posición en el mundo donde se colocará el bloque.
				//Se basa en los índices i(fila) y j(columna), y en un espaciado de 200 unidades.
				//XInicial, YInicial, y ZInicial definen la posición de origen del laberinto.
				AActor* Bloque = GetWorld()->SpawnActor<AActor>(MapaDeBloques[Tipo], Posicion, FRotator::ZeroRotator);
				//Instancia(spawnea) un actor del tipo correspondiente a Tipo desde el arreglo MapaDeBloques.
				//La posición es la calculada, y la rotación es nula(FRotator::ZeroRotator).
				BloquesDerecha.Add(Bloque, FVector(i, j, 0));
				//Guarda el actor instanciado en el mapa BloquesDerecha, usando el actor como clave y su posición lógica(i, j) como valor.
				//Esto sirve para luego clonarlo en la mitad izquierda(espejada).
			}	
		}
	}

}

void ALaberintoConcreto::ClonarMitadIzquierda()
{
	int32 Columnas = aMapaBloques[0].Num();
	//Obtiene el número total de columnas del mapa.
	//Se usa para calcular la posición espejada en el eje horizontal(Y).
	//Es importante que la matriz aMapaBloques esté correctamente inicializada antes de llamar a este método.

	for (auto& Par : BloquesDerecha)
		//Recorre cada elemento del mapa BloquesDerecha, que contiene los bloques ya generados en la mitad derecha.
		//Cada elemento Par tiene dos partes :
	    //Par.Key : un puntero al actor(AActor*) del bloque original.
		//Par.Value : un FVector(i, j, 0) que representa la posición lógica del bloque(índices de la matriz).
	{
		AActor* BloqueOriginal = Par.Key;
		FVector Indices = Par.Value;
		//Extrae el bloque original(AActor*) y sus índices de fila(i) y columna(j) del mapa.
		int32 i = Indices.X;
		int32 j = Indices.Y;
		//Obtiene los valores de i (fila) y j (columna) desde el FVector.

		int32 jIzquierda = Columnas - 1 - j; // espejo horizontal
		//Calcula la columna reflejada horizontalmente.
		//Ejemplo: si tienes 10 columnas y el bloque está en la columna 7, su espejo estará en la 2 (porque 10 - 1 - 7 = 2).
		FVector PosicionIzquierda(XInicial + i * 200, YInicial + jIzquierda * 200, ZInicial);
		//Calcula la posición en el mundo donde debe ir el clon reflejado.
		//Se usa el mismo patrón de espaciado(200 unidades) y las coordenadas de origen XInicial, YInicial, ZInicial.

		ABloque* Clonable = Cast<ABloque>(BloqueOriginal);
		//Intenta hacer un cast del actor original al tipo ABloque, para acceder a su método ClonarBloque().
		//Si el bloque original no es de tipo ABloque, Clonable será nullptr
		if (Clonable)
		{
			Clonable->ClonarBloque(PosicionIzquierda);
		}
		//Si el cast fue exitoso, llama a ClonarBloque(PosicionIzquierda) para que el actor original cree un clon suyo en la nueva posición reflejada.
		//Esto asume que el método ClonarBloque está correctamente implementado en ABloque.
	}
}


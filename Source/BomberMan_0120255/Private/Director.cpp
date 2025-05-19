// Fill out your copyright notice in the Description page of Project Settings.


#include "Director.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::EstablecerILaberintoBuilder(IILaberintoBuilder* Builder)
{
	LaberintoBuilder = Builder;
}

void ADirector::CrearMuros()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->ConstruirMuros();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}

void ADirector::CrearBloques()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->ConstruirBloques();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}

void ADirector::CrearPuertas()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->ConstruirPuertas();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}

void ADirector::CrearObstaculos()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->ConstruirObstaculos();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}

void ADirector::CrearLab1()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->ConstruirMuros();
		LaberintoBuilder->ConstruirBloques();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
} 

void ADirector::ConstruirTodo()
{
	if (LaberintoBuilder)
	{
		LaberintoBuilder->LaberintoCompleto();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder no asignado"));
	}
}


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
	LaberintoBuilder = Cast<IILaberintoBuilder>(Builder);
	//Cast the passed Actor and set the Builder
	if (!LaberintoBuilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Invalid Cast! See Output log for more details"));
	}
}

ALaberinto* ADirector::GetLaberinto()
{
	if (LaberintoBuilder)
	{
		//Returns the Lodging of the Builder
		return LaberintoBuilder->GetLaberinto();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}
void ADirector::ConstruirLaberinto()
{
	//Log if the Builder is NULL
	if (!LaberintoBuilder) {
		{
			UE_LOG(LogTemp, Error,
				TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized, "))
		}
		//Creates the buildings
		LaberintoBuilder->ConstruirBloques();
		LaberintoBuilder->ConstruirMuros();
		LaberintoBuilder->ConstruirPuertas();
		LaberintoBuilder->ConstruirObstaculos();
	}
}
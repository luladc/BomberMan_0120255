// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"

// Sets default values
AEnemigoTerrestre::AEnemigoTerrestre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigoTerrestre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


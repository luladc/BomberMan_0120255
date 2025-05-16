// Fill out your copyright notice in the Description page of Project Settings.


#include "PuertaTransportadora2.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

APuertaTransportadora2::APuertaTransportadora2()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear malla
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuertaMesh"));
    RootComponent = Mesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> PuertaMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (PuertaMeshAsset.Succeeded())
    {
        Mesh->SetStaticMesh(PuertaMeshAsset.Object);
        Mesh->SetRelativeScale3D(FVector(0.5f, 2.0f, 5.0f));
        Mesh->SetRelativeLocation(FVector(2700.0f, 6380.0f, 50.0f));
    }
}

void APuertaTransportadora2::BeginPlay()
{
    Super::BeginPlay();
}

void APuertaTransportadora2::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
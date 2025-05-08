// Fill out your copyright notice in the Description page of Project Settings.


#include "PuertaTransportadora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

// Inicialización de la instancia
APuertaTransportadora* APuertaTransportadora::Instance = nullptr;

APuertaTransportadora::APuertaTransportadora()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla
    UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuertaMesh"));
    RootComponent = MeshComponent;

    // Cargar un mesh por defecto desde el contenido del motor o del juego
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
        MeshComponent->SetRelativeScale3D(FVector(0.5f, 2.0f, 5.0f)); // forma rectangular tipo puerta
        MeshComponent->SetRelativeLocation(FVector(1460.0f, 1370.0f, 160.0f)); // ajustar altura
    }

}

void APuertaTransportadora::BeginPlay()
{
    Super::BeginPlay();

    if (!Instance)
    {
        Instance = this;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PuertaTransportadora inicializada."));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Otra instancia de PuertaTransportadora destruida."));
        Destroy();
    }
}

void APuertaTransportadora::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

APuertaTransportadora* APuertaTransportadora::GetInstance(UWorld* World)
{
    if (!Instance && World)
    {
        Instance = World->SpawnActor<APuertaTransportadora>(APuertaTransportadora::StaticClass());
    }
    return Instance;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Crear componente raíz
    RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = RootComp;

    // Crear y configurar el componente Static Mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);

    // Cargar el mesh del Goomba desde el contenido
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
        MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

    // Inicializar propiedades de movimiento
    MovementSpeed = 100.0f;
    PatrolRadius = 200.0f;
    bMovingRight = true;

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
    Super::BeginPlay();

    // Guardar la posición inicial
    InitialPosition = GetActorLocation();

    // Iniciar el movimiento de patrulla
    StartPatrol();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Implementar el movimiento de patrulla (ir a la derecha, dar la vuelta y retornar)
    FVector CurrentLocation = GetActorLocation();
    FVector Direction;

    if (bMovingRight)
    {
        Direction = FVector(1.0f, 0.0f, 0.0f); // Dirección hacia la derecha

        // Si alcanza el límite del radio de patrulla, cambiar dirección
        if (CurrentLocation.X >= InitialPosition.X + PatrolRadius)
        {
            bMovingRight = false;

            // Girar el Goomba 180 grados
            SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
        }
    }
    else
    {
        Direction = FVector(-1.0f, 0.0f, 0.0f); // Dirección hacia la izquierda

        // Si vuelve al punto inicial o sobrepasa el límite izquierdo, cambiar dirección
        if (CurrentLocation.X <= InitialPosition.X - PatrolRadius)
        {
            bMovingRight = true;

            // Girar el Goomba a la posición original
            SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
        }
    }

    // Calcular el desplazamiento en este frame
    FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

    // Actualizar la posición del actor
    SetActorLocation(NewLocation);
}

// Método para iniciar el movimiento de patrulla
void AEnemigo::StartPatrol()
{
    // Guardar la posición actual como punto inicial de patrulla
    InitialPosition = GetActorLocation();

    // Configurar para comenzar moviéndose hacia la derecha
    bMovingRight = true;

    // Asegurar que el Tick esté habilitado
    SetActorTickEnabled(true);
}

// Método para detener el movimiento de patrulla
void AEnemigo::StopPatrol()
{
    // Desactivar el Tick para detener el movimiento
    SetActorTickEnabled(false);
}

AActor* AEnemigo::Clonar(FVector SpawnLocation)
{
    UWorld* World = GetWorld();
    if (!World) return nullptr;

    FRotator Rotation = GetActorRotation();
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Crear el clon
    AEnemigo* Clon = World->SpawnActor<AEnemigo>(GetClass(), SpawnLocation, Rotation, SpawnParams);

    if (Clon)
    {
        // Copiar valores importantes
        Clon->MovementSpeed = MovementSpeed;
        Clon->PatrolRadius = PatrolRadius;
        Clon->bMovingRight = bMovingRight;

        // Copiar el Static Mesh
        if (MeshComponent && MeshComponent->GetStaticMesh())
        {
            Clon->MeshComponent->SetStaticMesh(MeshComponent->GetStaticMesh());
        }

        // Iniciar patrullaje
        Clon->StartPatrol();
    }

    return Clon;
}


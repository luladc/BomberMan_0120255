// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"
#include "GameFramework/Actor.h" // Agregar esta línea para incluir la definición de GetActorHiddenInGame
#include "Publicador.h"

ABloqueHielo::ABloqueHielo()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bPuedeMoverse = FMath::RandBool(); // Desactivar el movimiento
    bEsDestructible = true;
}

void ABloqueHielo::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(TimerVisibilidad, this, &ABloqueHielo::AlternarVisibilidad, 5.0f, true);
}

void ABloqueHielo::AlternarVisibilidad()
{
    if (bPuedeMoverse) {
        bool EstadoActual = IsHidden(); // Cambiar GetActorHiddenInGame() por IsHidden()
        SetActorHiddenInGame(!EstadoActual);
    }

}

void ABloqueHielo::Update(APublicador* Publisher)
{
    FVector PosBomba = Publisher->GetActorLocation();
    FVector PosBloque = GetActorLocation();

    bool MismaX = FMath::IsNearlyEqual(PosBomba.X, PosBloque.X, 1.0f);
    bool MismaY = FMath::IsNearlyEqual(PosBomba.Y, PosBloque.Y, 1.0f);

    float Distancia = FVector::Dist(PosBomba, PosBloque);

    if (bEsDestructible && Distancia <= 300.0f && (MismaX || MismaY))
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque de agua será destruido"));
        Morph();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque de agua NO fue afectado"));
    }
}

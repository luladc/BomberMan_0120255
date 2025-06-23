// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueVidrio.h"
#include "Publicador.h"

ABloqueVidrio::ABloqueVidrio()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bPuedeMoverse = FMath::RandBool(); // Desactivar el movimiento
    bEsDestructible = true;
}

void ABloqueVidrio::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(TimerDestruir, this, &ABloqueVidrio::DestruirBloque, 5.0f, false);
}

void ABloqueVidrio::DestruirBloque()
{
    if (bPuedeMoverse)
    {
        // Lógica para destruir el bloque
        Destroy();
    }

}

void ABloqueVidrio::Update(APublicador* Publisher)
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
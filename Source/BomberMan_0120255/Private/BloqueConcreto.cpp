// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Publicador.h"

ABloqueConcreto::ABloqueConcreto()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Panels.M_Concrete_Panels'"));
        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bEsDestructible = true;
}

void ABloqueConcreto::BeginPlay()
{
    Super::BeginPlay();

}

void ABloqueConcreto::Update(APublicador* Publisher)
{
    FVector PosBomba = Publisher->GetActorLocation();
    FVector PosBloque = GetActorLocation();

    bool MismaX = FMath::IsNearlyEqual(PosBomba.X, PosBloque.X, 1.0f);
    bool MismaY = FMath::IsNearlyEqual(PosBomba.Y, PosBloque.Y, 1.0f);

    float Distancia = FVector::Dist(PosBomba, PosBloque);

    if (bEsDestructible && Distancia <= 300.0f && (MismaX || MismaY))
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque de agua ser� destruido"));
        Morph();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Bloque de agua NO fue afectado"));
    }
}
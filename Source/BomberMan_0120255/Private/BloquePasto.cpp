// Fill out your copyright notice in the Description page of Project Settings.


#include "BloquePasto.h"

ABloquePasto::ABloquePasto()
{
    PrimaryActorTick.bCanEverTick = true; // Activar el Tick
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloquePasto::BeginPlay()
{

}
// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoJefe.h"

AEnemigoJefe::AEnemigoJefe()
{
    MovementSpeed = 300.0f; // M�s lento pero m�s fuerte
    PatrolRadius = 1500.0f;
    VidaExtra = 500.0f;
    DanioEspecial = 50.0f;
    bPuedeInvocarRefuerzos = true;
}

void AEnemigoJefe::BeginPlay()
{
    Super::BeginPlay();
    // Tal vez mostrar un efecto de jefe o un mensaje
}

void AEnemigoJefe::AtaqueEspecial()
{
    // Aqu� implement�s un ataque poderoso (disparo, golpe de �rea, etc.)
    UE_LOG(LogTemp, Warning, TEXT("El jefe realiza un ATAQUE ESPECIAL con da�o: %f"), DanioEspecial);
}

void AEnemigoJefe::InvocarRefuerzos()
{
    if (bPuedeInvocarRefuerzos)
    {
        // Spawn de enemigos adicionales
        UE_LOG(LogTemp, Warning, TEXT("El jefe invoca refuerzos."));
        bPuedeInvocarRefuerzos = false; // Solo una vez, por ejemplo
    }
}


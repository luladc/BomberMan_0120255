// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueOro.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API ABloqueOro : public ABloque
{
	GENERATED_BODY()
public:
    ABloqueOro();
protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void Update(APublicador* Publisher) override;

private:
    FVector PosicionInicial;
    FVector PosicionObjetivo;

    float TiempoEntreMovimientos;
    float TiempoDesdeUltimoMovimiento;
    float VelocidadMovimiento;

    bool bMoviendoAObjetivo;

    void ElegirNuevaDireccion();
};

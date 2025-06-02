// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoJefe.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API AEnemigoJefe : public AEnemigo
{
	GENERATED_BODY()

protected:
    float VidaExtra;
    float DanioEspecial;
    bool bPuedeInvocarRefuerzos;

public:
    AEnemigoJefe();

    virtual void BeginPlay() override;

    // Método especial
    UFUNCTION(BlueprintCallable, Category = "Jefe")
    void AtaqueEspecial();

    UFUNCTION(BlueprintCallable, Category = "Jefe")
    void InvocarRefuerzos();

    // Setter / Getter extra si querés
    void SetVidaExtra(float NuevaVida) { VidaExtra = NuevaVida; }
    float GetVidaExtra() const { return VidaExtra; }
	
};

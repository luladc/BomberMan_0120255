// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuertaTransportadora2.generated.h"

UCLASS()
class BOMBERMAN_0120255_API APuertaTransportadora2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuertaTransportadora2();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    // Instancia única que se conserva (no es estática)
    UPROPERTY()
    APuertaTransportadora2* InstanciaUnica;

    // Componente visual
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* Mesh;
};

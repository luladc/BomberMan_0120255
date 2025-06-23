// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Laberinto.generated.h"
class ABloque; class APuertaTransportadora; class AObstaculo;
UCLASS()
class BOMBERMAN_0120255_API ALaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY()
	TArray<ABloque*> Bloques;

public:
	void AgregarBloque(ABloque* Bloque) { Bloques.Add(Bloque); }

	TArray<ABloque*> ObtenerBloques() const { return Bloques; }

};

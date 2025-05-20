// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "LaberintoConcreto.generated.h"

UCLASS()
class BOMBERMAN_0120255_API ALaberintoConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaberintoConcreto();

private:
	class ALaberinto* Laberinto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirBloques() override;
	void ConstruirMuros() override;
	void ConstruirPuertas() override;
	void ConstruirObstaculos() override;
	virtual class ALaberinto* GetLaberinto() override;
	// Mapeos para cada tipo
	TMap<int32, TSubclassOf<AActor>> MapaDeBloques;
	TMap<int32, TSubclassOf<AActor>> MapaDePuertas;
	TMap<int32, TSubclassOf<AActor>> MapaDeObstaculos;

};
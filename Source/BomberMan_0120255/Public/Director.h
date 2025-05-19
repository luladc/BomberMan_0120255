// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Director.generated.h"

UCLASS()
class BOMBERMAN_0120255_API ADirector : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADirector();

private:
	//El Constructor Actor, que debe ser un ConstructorDeAlojamiento
	IILaberintoBuilder* LaberintoBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	//Establecer el Actor Constructor
	void EstablecerILaberintoBuilder(IILaberintoBuilder* Builder);
	void CrearBloques();
	void CrearPuertas();
	void CrearObstaculos();
	void CrearMuros();
	void CrearLab1();
	void ConstruirTodo();

};

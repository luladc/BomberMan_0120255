// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Enemigo.h"
#include "ConfiguracionNivel.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GestorDificil.generated.h"
class ABloque;
UCLASS()
class BOMBERMAN_0120255_API AGestorDificil : public AActor, public IConfiguracionNivel
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorDificil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoConcreto3* BuilderLab3;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirector* DirectorLab3;
	// Bloques generados para aplicar el patrón Observer
	UPROPERTY()
	TArray<ABloque*> aBloques;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EnemyLife() override;
	void CargarLaberinto() override;
	void CargarEnemigos() override;

	float EnemyLifeExtreme;
};

// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "ConfiguracionNivel.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GestorFacil.generated.h"
class ABloque;
UCLASS()
class BOMBERMAN_0120255_API AGestorFacil : public AActor, public IConfiguracionNivel
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorFacil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoConcreto* BuilderLab;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirector* DirectorLab;

	// Bloques generados para aplicar el patr�n Observer
	UPROPERTY()
	TArray<ABloque*> aBloques;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EnemyLife() override;
	void CargarLaberinto() override;
	void CargarEnemigos() override;

	float EnemyLifeEasy;
};

// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Enemigo.h"
#include "ConfiguracionNivel.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GestorMedio.generated.h"

UCLASS()
class BOMBERMAN_0120255_API AGestorMedio : public AActor, public IConfiguracionNivel
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorMedio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoConcreto2* BuilderLab2;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirector* DirectorLab2;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EnemyLife() override;
	void CargarLaberinto() override;

	float EnemyLifeMedium;
};

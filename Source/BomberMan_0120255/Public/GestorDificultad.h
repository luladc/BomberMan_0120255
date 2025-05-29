// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GestorDificultad.generated.h"

UCLASS()
class BOMBERMAN_0120255_API AGestorDificultad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorDificultad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	class AGestorFacil* GestorFacil;
	class AGestorMedio* GestorMedio;
	class AGestorDificil* GestorDificil;

	void EasyDifficultyOperation();
	void MediumDifficultyOperation();
	void ExtremeDifficultyOperation();
};

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_0120255GameMode.generated.h"

class ABloque; class ABloqueRaro; class AGestorDificultad;

UCLASS(minimalapi)
class ABomberMan_0120255GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_0120255GameMode();

public:
	virtual void BeginPlay() override;

private:
	AGestorDificultad* DifficultyManager;
	void SpawnBombaYSuscribir();

	UPROPERTY()
	class ABomba* Bomba;
};




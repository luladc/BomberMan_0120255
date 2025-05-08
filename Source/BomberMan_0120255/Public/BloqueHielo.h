// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API ABloqueHielo : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueHielo();

	void BeginPlay();

	void AlternarVisibilidad();
private:
	FTimerHandle TimerVisibilidad;
};

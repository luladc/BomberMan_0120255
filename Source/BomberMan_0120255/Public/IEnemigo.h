// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEnemigo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEnemigo : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_0120255_API IIEnemigo
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Método para clonar el actor */
	virtual AActor* Clonar(FVector SpawnLocation) = 0;
};

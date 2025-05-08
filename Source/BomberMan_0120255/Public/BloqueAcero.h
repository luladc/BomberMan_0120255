// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueAcero();
protected:
	virtual void BeginPlay() override;
};

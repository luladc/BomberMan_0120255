// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloquePasto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API ABloquePasto : public ABloque
{
	GENERATED_BODY()
protected:
	ABloquePasto();
	virtual void BeginPlay() override;
};

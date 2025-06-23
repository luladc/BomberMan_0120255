// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueVidrio.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120255_API ABloqueVidrio : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueVidrio();
protected:
	virtual void BeginPlay() override;

private:
	FTimerHandle TimerDestruir; // Declarar TimerDestruir

	void DestruirBloque();
	virtual void Update(APublicador* Publisher) override;

};

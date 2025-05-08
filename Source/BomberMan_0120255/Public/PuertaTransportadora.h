// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuertaTransportadora.generated.h"

UCLASS()
class BOMBERMAN_0120255_API APuertaTransportadora : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuertaTransportadora();

	// Acceso global al singleton
	static APuertaTransportadora* GetInstance(UWorld* World);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Singleton
	static APuertaTransportadora* Instance;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

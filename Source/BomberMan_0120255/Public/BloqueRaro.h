// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IBloque.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueRaro.generated.h"

UCLASS()
class BOMBERMAN_0120255_API ABloqueRaro : public AActor, public IIBloque
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueRaro();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bloque")
	UStaticMeshComponent* MallaBloque;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar() override;
	bool bPuedeMoverse;
	FVector TamanoBloque;
};

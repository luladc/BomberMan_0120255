// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "IBloque.h"
#include "Subscriptor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMAN_0120255_API ABloque : public AActor, public IIBloque, public ISubscriptor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();
	// Método para clonar el actor
	virtual AActor* ClonarBloque(FVector PosicionDestino);
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bloque")
	UStaticMeshComponent* MallaBloque;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool bPuedeMoverse;
	FVector TamanoBloque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
	bool bEsDestructible = false;

protected:

	//Manejador del temporizador para la destrucción
	FTimerHandle TimerHandleExplosion;

public:
	virtual void Update(APublicador* Publisher);
	virtual void Morph();
	
	UPROPERTY()
	class ABomba* Bomba;

public:

	virtual void Destroy();

	virtual void SetBomba(ABomba* myBomba);

};

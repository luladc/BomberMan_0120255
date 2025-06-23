// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEnemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class BOMBERMAN_0120255_API AEnemigo : public AActor, public IIEnemigo
{
	GENERATED_BODY()

protected:
    float MovementSpeed;
    float PatrolRadius;
    FVector InitialPosition;
    bool bMovingRight;

	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    // Componentes
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* RootComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Método para clonar el actor 
	virtual AActor* Clonar(FVector SpawnLocation) override;

    // Método para iniciar el movimiento de patrulla
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void StartPatrol();

    // Método para detener el movimiento de patrulla
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void StopPatrol();

    // Getter y Setter para las propiedades
    UFUNCTION(BlueprintCallable, Category = "Properties")
    void SetMovementSpeed(float Speed) { MovementSpeed = Speed; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    float GetMovementSpeed() const { return MovementSpeed; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    void SetPatrolRadius(float Radius) { PatrolRadius = Radius; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    float GetPatrolRadius() const { return PatrolRadius; }

};

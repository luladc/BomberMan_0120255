// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador.generated.h"

UCLASS()
class BOMBERMAN_0120255_API APublicador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//The Subscribers of this Publisher
	UPROPERTY()
	TArray<AActor*> Subscribers = TArray<AActor*>();

public:
	//Add the pased Subscriber to the list
	virtual void Subscribir(AActor* Subscriptor);
	//Remove the passed Subscriber from the list
	virtual void DeSubscribir(AActor* SubscriptorRemover);
	//Notify all the Subscribers that something has changed
	virtual void NotificarSubs();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

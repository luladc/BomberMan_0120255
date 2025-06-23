// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "Subscriptor.h"

// Sets default values
APublicador::APublicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador::Subscribir(AActor* Subscriptor)
{
	//Add the passed Subscriber
	Subscribers.Add(Subscriptor);
}

void APublicador::DeSubscribir(AActor* SubscriptorRemover)
{
	//Remove the passed Subscriber
	Subscribers.Remove(SubscriptorRemover);

}

void APublicador::NotificarSubs()
{
	//Loop for each Subscriber
	for (AActor* Actor : Subscribers)
	{
		//Agarra a cada subscriptor y lo castea a ISuscriptor
		ISubscriptor* Sub = Cast<ISubscriptor>(Actor);
		if (Sub)
		{
			//Notifica que ocurrió un cambio
			Sub->Update(this);
		}
	}

}
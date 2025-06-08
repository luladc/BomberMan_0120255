// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque::ABloque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	RootComponent = MallaBloque;
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	bPuedeMoverse = FMath::RandBool();

	// Tamaño del bloque (se puede modificar desde el editor o código)
	TamanoBloque = FVector(2.0f, 2.0f, 2.0f); // Escala predeterminada

	// Aplicar el tamaño al bloque
	MallaBloque->SetWorldScale3D(TamanoBloque);
}

AActor* ABloque::ClonarBloque(FVector PosicionDestino)
//este es un puntero hacia un actor que va a aser nuestro clon 
//el parametro de posisciondestino es el ligar en el que nuestro clon va a spawnearse
{
	
	UWorld* World = GetWorld();
	//el uwolrd obtiene una referencia al mundo actual.
	//el GetWorld() da acceso al contexto del juego para poder spawnear
	if (!World) return nullptr;
    //Si World es nullptr (no existe), entonces no se puede continuar, así que se devuelve nullptr.

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	//FActorSpawnParameters nos permite personalizar el como se va a spawnear el actor
    //SpawnCollisionHandlingOverride en AlwaysSpawn asegura que el actor se spawnee incluso si hay colisiones en el lugar.

	ABloque* Clon = World->SpawnActor<ABloque>(GetClass(), PosicionDestino, FRotator::ZeroRotator, SpawnParams);
	//GetClass() devuelve la clase exacta del objeto que está siendo clonado
	//Se spawnea en la PosicionDestino
	//El actor que va crearse va a ser guardado en Clon
	return Clon;
	//y ese return vuelve el actor clonado
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

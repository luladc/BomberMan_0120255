// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueRaro.h"

// Sets default values
ABloqueRaro::ABloqueRaro()
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

	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));

		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}

	bPuedeMoverse = FMath::RandBool();

	// Tamaño del bloque (se puede modificar desde el editor o código)
	TamanoBloque = FVector(2.0f, 2.0f, 2.0f); // Escala predeterminada

	// Aplicar el tamaño al bloque
	MallaBloque->SetWorldScale3D(TamanoBloque);
}

// Called when the game starts or when spawned
void ABloqueRaro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueRaro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* ABloqueRaro::Clonar()
{
	// Clona este mismo actor usando su clase y los valores dados
	FVector pos = GetActorLocation()+FVector(200.f,0.f,0.f);

	FRotator rot = GetActorRotation();

	ABloqueRaro* Clon = GetWorld()->SpawnActor<ABloqueRaro>(ABloqueRaro::StaticClass(), pos,rot);

	return Clon;
}

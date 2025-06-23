// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Publicador.h"
#include "Bomba.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque::ABloque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	RootComponent = MallaBloque;
	MallaBloque->SetupAttachment(RootComponent);
	MallaBloque->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MallaBloque->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	MallaBloque->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

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
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ABloque* Clon = World->SpawnActor<ABloque>(GetClass(), PosicionDestino, FRotator::ZeroRotator, SpawnParams);
	return Clon;
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

void ABloque::Destroy()
{
	Super::Destroy(); // Llamar al método base
	if (!Bomba) {
		return;
	}

	Bomba->DeSubscribir(this);
}

void ABloque::Update(APublicador* Publisher)
{
	FVector PosBomba = Publisher->GetActorLocation();
	FVector PosBloque = GetActorLocation();

	bool MismaX = FMath::IsNearlyEqual(PosBomba.X, PosBloque.X, 1.0f);
	bool MismaY = FMath::IsNearlyEqual(PosBomba.Y, PosBloque.Y, 1.0f);

	float Distancia = FVector::Dist(PosBomba, PosBloque);

	if (bEsDestructible && Distancia <= 300.0f && (MismaX || MismaY))
	{
		Destroy();
	}
}


void ABloque::Morph()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque en %s fue destruido"), *GetActorLocation().ToString());

	Destroy();
}

void ABloque::SetBomba(ABomba* miBomba)
{
	if (Bomba && bEsDestructible) // solo si este bloque es destructible
	{
		Bomba->Subscribir(this); // Suscribirse
	}

}
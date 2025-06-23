// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Kismet/GameplayStatics.h"
#include "Bloque.h"
#include "NiagaraFunctionLibrary.h"	
#include "Components/StaticMeshComponent.h"
#include "NiagaraSystem.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "Publicador.h"
#include "Subscriptor.h"

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> EfectoNiagaraAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/Niagara_System/NS_Explosion.NS_Explosion'"));
	if (EfectoNiagaraAsset.Succeeded())
	{
		EfectoExplosion = EfectoNiagaraAsset.Object;
	}

}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Explosion, this, &ABomba::Explotar, TiempoParaExplotar, false);
	
}


// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController && PlayerController->IsInputKeyDown(EKeys::E))
	{
		Explotar();
	}
}

void ABomba::Explotar()
{
   //Efecto en el centro
  if (EfectoExplosion) {
  	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
  		GetWorld(),
  		EfectoExplosion,
  		GetActorLocation(),
  		FRotator::ZeroRotator
  	);
  }
  
  // Buscar bloques cercanos
  DetectarYSubscribirBloques();
  
  // Notificar a todos los suscriptores
  NotificarSubs();
  
  // Destruir bomba
  Destroy();
	
}

void ABomba::DetectarYSubscribirBloques()
{
	TArray<FVector> Direcciones = {
		FVector(1, 0, 0), FVector(-1, 0, 0),
		FVector(0, 1, 0), FVector(0, -1, 0)
	};

	FVector Origen = GetActorLocation();

	for (const FVector& Direccion : Direcciones)
	{
		for (int i = 1; i <= RangoExplosion; ++i)
		{
			FVector Destino = Origen + Direccion * i * 100.0f;
			FHitResult Hit;
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(this);

			bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Origen, Destino, ECC_Visibility, Params);

			if (bHit)
			{
				AActor* ActorImpactado = Hit.GetActor();
				if (ActorImpactado && ActorImpactado->Implements<USubscriptor>())
				{
					Subscribir(ActorImpactado); // Heredado de APublicador
				}
				break; // La explosión se detiene al primer impacto
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("explosion"));
}

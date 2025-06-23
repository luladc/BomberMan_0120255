#pragma once
#include "Publicador.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "CoreMinimal.h"
#include "Subscriptor.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"
UCLASS()
class BOMBERMAN_0120255_API ABomba : public APublicador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Explotar();

private:
	UPROPERTY()
	UStaticMeshComponent* Mesh;

	UPROPERTY()
	UNiagaraSystem* EfectoExplosion;

	UPROPERTY(EditAnywhere)
	float TiempoParaExplotar = 2.0f;

	UPROPERTY(EditAnywhere)
	int32 RangoExplosion = 3;

	FTimerHandle TimerHandle_Explosion;

private:
	void DetectarYSubscribirBloques();

};

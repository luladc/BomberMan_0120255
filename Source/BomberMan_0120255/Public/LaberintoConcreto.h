#pragma once
#include "IBloque.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "LaberintoConcreto.generated.h"
class ABloque;
UCLASS()
class BOMBERMAN_0120255_API ALaberintoConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaberintoConcreto();
	class ALaberinto* Laberinto;

private:
	TArray<TArray<int32>> aMapaBloques;
	TArray<TArray<int32>> aMapaPuertas;
	TArray<TArray<int32>> aMapaObstaculos;
	float XInicial = 1000.0f;
	float YInicial = 1000.0f;
	float ZInicial = 0.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirBloques() override;
	void ConstruirMuros() override;
	void ConstruirPuertas() override;
	void ConstruirObstaculos() override;
	virtual class ALaberinto* GetLaberinto() override;
	// Mapeos para cada tipo
	TMap<int32, TSubclassOf<AActor>> MapaDeBloques;
	TMap<int32, TSubclassOf<AActor>> MapaDePuertas;
	TMap<int32, TSubclassOf<AActor>> MapaDeObstaculos;

public:
	TArray<ABloque*> BloquesGenerados;

	TArray<ABloque*> GetBloquesGenerados() const { return BloquesGenerados; }
};
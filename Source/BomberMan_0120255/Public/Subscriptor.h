// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Subscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USubscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_0120255_API ISubscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the Subscriber
	virtual void Update(class APublicador* Publisher) = 0;
};

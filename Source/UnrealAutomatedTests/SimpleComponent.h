// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UNREALAUTOMATEDTESTS_API USimpleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	bool bDidSomething = false;

	void DoSomething();
};

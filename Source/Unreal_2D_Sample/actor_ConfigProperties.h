// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "actor_ConfigProperties.generated.h"

UCLASS()
class UNREAL_2D_SAMPLE_API Aactor_ConfigProperties : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aactor_ConfigProperties();

protected:
    bool displayDebugText;
    int32 currentSecond;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    virtual void MyDisplayDebug();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

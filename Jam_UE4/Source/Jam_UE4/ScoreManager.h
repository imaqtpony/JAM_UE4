// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Blueprint/UserWidget.h"

#include "ScoreManager.generated.h"

UCLASS()
class JAM_UE4_API AScoreManager : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, "UI")
		TSubclassOf<UUserWidget> widgetClass;
	UUserWidget* healthBar;
	
public:	
	// Sets default values for this actor's properties
	AScoreManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

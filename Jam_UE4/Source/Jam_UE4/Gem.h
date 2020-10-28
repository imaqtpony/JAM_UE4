// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "GameplayTagContainer.h"
#include "Gem.generated.h"


UCLASS()
class JAM_UE4_API AGem : public AActor
{
	GENERATED_BODY()

	
	
public:	
	UPROPERTY()
	class USphereComponent* Trigger;

	AGem();



	UFUNCTION()
	void NotifyActorBeginOverlap(AActor* Other);
	//virtual void NotifyActorBeginOverlap(AActor* Other) override;

	//UFUNCTION()	
	//void OnOverlapBegin(class AActor* OverlappedActor);


	UFUNCTION()
	AGem* InstantiateGem(AGem* ExistingActor, FVector SpawnLocation, FRotator SpawnRotation);
};

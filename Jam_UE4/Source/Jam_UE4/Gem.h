// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gem.generated.h"

UCLASS()
class JAM_UE4_API AGem : public AActor
{
	GENERATED_BODY()

	
	
public:	
	UPROPERTY()
	class USphereComponent* Trigger;
	// Sets default values for this actor's properties
	AGem();
	//{
	//	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCollider"));

	//	// Both colliders need to have this set to true for events to fire
	//	//Trigger->bGenerateOverlapEvents(true);
	//	Trigger.bGenerateOverlapEvents = true;

	//	// Set the collision mode for the collider
	//	// This mode will only enable the collider for raycasts, sweeps, and overlaps
	//	Trigger.SetCollisionEnabled(ECollisionEnabled::QueryOnly);


	//	//OnActorBeginOverlap.Add(OnOverlapBegin);
	//	//OnOverlapBegin.AddDynamic(this, &AGem::OnOverlapBegin);

	//}

	//virtual void BeginPlay() override;

	UFUNCTION()
	void NotifyActorBeginOverlap(AActor* Other);
	//virtual void NotifyActorBeginOverlap(AActor* Other) override;

	//UFUNCTION()	
	//void OnOverlapBegin(class AActor* OverlappedActor);


	UFUNCTION()
	AGem* InstantiateGem(AGem* ExistingActor, FVector SpawnLocation, FRotator SpawnRotation);
};

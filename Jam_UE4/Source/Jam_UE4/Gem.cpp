// Fill out your copyright notice in the Description page of Project Settings.


#include "Gem.h"
#include "Components/SphereComponent.h"

// Sets default values
AGem::AGem()
{
	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCollider"));

	// Both colliders need to have this set to true for events to fire
	Trigger->SetGenerateOverlapEvents(true);

	// Set the collision mode for the collider
	// This mode will only enable the collider for raycasts, sweeps, and overlaps
	//Trigger.SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	FScriptDelegate BeginOverlap;
	BeginOverlap.BindUFunction(this, TEXT("NotifyActorBeginOverlap"));

	//Trigger->OnComponentBeginOverlap.AddDynamic(this, &AGem::NotifyActorBeginOverlap);
	Trigger->OnComponentBeginOverlap.Add(BeginOverlap);
	//OnOverlapBegin.AddDynamic(this, &AGem::OnOverlapBegin);

}

// Called when the game starts or when spawned
//void AGem::BeginPlay()
//{
//	Super::BeginPlay();
//
//}

//void AGem::OnOverlapBegin(class AActor* OverlappedActor) 
//{
//	if (OverlappedActor->ActorHasTag(FName(TEXT("Player"))))
//	{
//		// ...
//	}
//}

void AGem::NotifyActorBeginOverlap(AActor* Other) 
{
	//if (Other->ActorHasTag(FName(TEXT("Player"))))
	if (Other && (Other!=this))
	{


		// ...
		printf("Triggered !");

	}
}


// fonction d'instanciation
AGem* AGem::InstantiateGem(AGem* ExistingActor, FVector SpawnLocation, FRotator SpawnRotation)
{
    UWorld* World = ExistingActor->GetWorld();
    FActorSpawnParameters SpawnParams;
    SpawnParams.Template = ExistingActor;
    return World->SpawnActor<AGem>(ExistingActor->GetClass(), SpawnLocation, SpawnRotation, SpawnParams);
}



// Fill out your copyright notice in the Description page of Project Settings.


#include "Gem.h"
#include "Components/SphereComponent.h"
//#include "GameplayTagContainer.h"


// Sets default values
AGem::AGem()
{
	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCollider"));

	// Both colliders need to have this set to true for events to fire
	Trigger->SetGenerateOverlapEvents(true);


	FScriptDelegate BeginOverlap;
	BeginOverlap.BindUFunction(this, TEXT("NotifyActorBeginOverlap"));

	//Trigger->OnComponentBeginOverlap.AddDynamic(this, &AGem::NotifyActorBeginOverlap);
	Trigger->OnComponentBeginOverlap.Add(BeginOverlap);
	//OnOverlapBegin.AddDynamic(this, &AGem::OnOverlapBegin);

	//Tags.AddUnique(TEXT("MyTag"));


}


void AGem::NotifyActorBeginOverlap(AActor* Other) 
{
	//if (Other->ActorHasTag(FName(TEXT("Player"))))
	if (Other && (Other!=this))
	{


		Destroy();
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



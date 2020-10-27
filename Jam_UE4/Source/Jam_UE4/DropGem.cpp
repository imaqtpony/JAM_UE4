// Fill out your copyright notice in the Description page of Project Settings.

#include "Gem.h"
#include "DropGem.h"

// Sets default values for this component's properties
UDropGem::UDropGem()
{

	// ...


}


// Called when the game starts
void UDropGem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UDropGem::BeginDestroy() 
{


	//thisGem = GetWorld()->SpawnActor(AGem::StaticClass(), pos, rot, SpawnInfo);

}



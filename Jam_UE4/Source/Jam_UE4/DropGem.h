// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DropGem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JAM_UE4_API UDropGem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDropGem();

	/*UPROPERTY()
	AGem* thisGem;*/

	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;
		
};

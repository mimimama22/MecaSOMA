// Fill out your copyright notice in the Description page of Project Settings.


#include "moveObject.h"

// Sets default values
AmoveObject::AmoveObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshObject = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshObject"));
	RootComponent = MeshObject;

}

void AmoveObject::MoveObject_Implementation(float Value, AActor* Actor)
{
	FVector3d NewLocation = MeshObject->GetRelativeLocation() + FVector3d(Value,0, 0);

	//NewLocation = FMath::Clamp(NewLocation, FVector3d(0, 0, 0), FVector3d(100, 100, 100));
	MeshObject->SetRelativeLocation(NewLocation);
	
}

void AmoveObject::Interact_Implementation(float Value, AActor* Actor)
{
	MoveObject_Implementation(Value, Actor);
}

// Called when the game starts or when spawned
void AmoveObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmoveObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


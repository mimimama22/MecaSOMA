// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "moveObject.generated.h"

UCLASS()
class MECASOMA_API AmoveObject : public AActor, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshObject;
	
public:	
	// Sets default values for this actor's properties
	AmoveObject();

	UFUNCTION(Blueprintable, BlueprintNativeEvent, Category = Function)
	void MoveObject(float Value, AActor* Actor);

	virtual void Interact_Implementation(float Value, AActor* Actor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

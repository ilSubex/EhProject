// Copyright Epic Games, Inc. All Rights Reserved.

#include "EH_GP3_25PickUpComponent.h"

UEH_GP3_25PickUpComponent::UEH_GP3_25PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UEH_GP3_25PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UEH_GP3_25PickUpComponent::OnSphereBeginOverlap);
}

void UEH_GP3_25PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AEH_GP3_25Character* Character = Cast<AEH_GP3_25Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}

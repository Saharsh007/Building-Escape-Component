// CopyRight Saharsh

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "opendoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE_API Uopendoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Uopendoor();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);
private:
	float InitialYaw;
	float CurrentYaw; 
	UPROPERTY(EditAnywhere)
	float OpenAngle = -180.0f;
	// UPROPERTY(EditAnywhere)
	float CloseAngle = -90.f;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
	AActor* TheActorThatOpensDoor;

	float DoorLastOpened=0.f;

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay=0.8f;

	UPROPERTY(EditAnywhere)
	float DoorOpenSpeed = 0.7f;

	UPROPERTY(EditAnywhere)
	float DoorCloseSpeed=3.0f;

};

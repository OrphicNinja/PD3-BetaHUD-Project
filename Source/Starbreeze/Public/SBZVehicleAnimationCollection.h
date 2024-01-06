#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESBZVehicleDoorState.h"
#include "SBZVehicleDoorAnimationContainer.h"
#include "SBZVehicleAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZVehicleAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZVehicleDoorState, FSBZVehicleDoorAnimationContainer> DoorAnimationContainers;
    
public:
    USBZVehicleAnimationCollection();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=VehicleWheel -FallbackName=VehicleWheel
#include "SBZVehicleWheel.generated.h"

UCLASS(Blueprintable)
class USBZVehicleWheel : public UVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDriven;
    
    USBZVehicleWheel();
};


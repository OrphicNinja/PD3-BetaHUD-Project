#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=SimpleWheeledVehicleMovementComponent -FallbackName=SimpleWheeledVehicleMovementComponent
#include "SBZWheeledVehicleMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleMovementComponent : public USimpleWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDriveTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverriddenDriveTorque;
    
public:
    USBZWheeledVehicleMovementComponent();
};


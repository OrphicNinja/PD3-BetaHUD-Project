#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZSensorInterface.generated.h"

class USBZOutlineComponent;
class USBZSensorComponent;

UINTERFACE(Blueprintable)
class USBZSensorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZSensorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZOutlineComponent* GetSensorOutlineComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZSensorComponent* GetSensorComponent();
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SBZObjectContainer.h"
#include "SBZActorContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class USBZActorContainer : public USBZObjectContainer {
    GENERATED_BODY()
public:
    USBZActorContainer();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};


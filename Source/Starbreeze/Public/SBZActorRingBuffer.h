#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SBZObjectRingBuffer.h"
#include "SBZActorRingBuffer.generated.h"

class AActor;

UCLASS(Blueprintable)
class USBZActorRingBuffer : public USBZObjectRingBuffer {
    GENERATED_BODY()
public:
    USBZActorRingBuffer();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};


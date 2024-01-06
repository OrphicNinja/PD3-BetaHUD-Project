#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZTimeEventManager.generated.h"

class USBZTimeEventManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZTimeEventManager : public UObject {
    GENERATED_BODY()
public:
    USBZTimeEventManager();
    UFUNCTION(BlueprintCallable)
    void RequestTimeEventCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextResetTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZTimeEventManager* Get(const UObject* WorldContextObject);
    
};


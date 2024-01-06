#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZBanPlayerManager.generated.h"

class USBZBanPlayerManager;

UCLASS(Blueprintable)
class USBZBanPlayerManager : public UObject {
    GENERATED_BODY()
public:
    USBZBanPlayerManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZBanPlayerManager* GetBanPlayerManager(const UObject* WorldContextObject);
    
};


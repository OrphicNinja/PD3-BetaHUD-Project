#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZMetaDataLoader.generated.h"

UCLASS(Blueprintable)
class USBZMetaDataLoader : public UObject {
    GENERATED_BODY()
public:
    USBZMetaDataLoader();
protected:
    UFUNCTION(BlueprintCallable)
    void OnRetryGetUserEntitlements();
    
};


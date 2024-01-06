#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZTagEventInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZTagEventInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZTagEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTagActive(const FGameplayTag& EventTag, bool bActive);
    
};


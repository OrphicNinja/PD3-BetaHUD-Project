#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZBreakableInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZBreakableInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZBreakableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBroken();
    
};


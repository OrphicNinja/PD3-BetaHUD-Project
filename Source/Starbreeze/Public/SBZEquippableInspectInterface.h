#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZEquippableInspectInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USBZEquippableInspectInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZEquippableInspectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool StartCurrentEquippableInspect() PURE_VIRTUAL(StartCurrentEquippableInspect, return false;);
    
};


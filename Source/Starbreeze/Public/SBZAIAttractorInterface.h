#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZAIAttractorInterface.generated.h"

class APawn;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USBZAIAttractorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZAIAttractorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool SetEnabled(bool bEnabled) PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetAttractorInstigator(APawn* Instigator) PURE_VIRTUAL(SetAttractorInstigator,);
    
};


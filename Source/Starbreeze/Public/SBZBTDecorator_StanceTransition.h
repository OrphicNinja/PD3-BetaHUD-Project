#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "SBZBTDecorator_StanceTransition.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_StanceTransition : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStanceTransition;
    
public:
    USBZBTDecorator_StanceTransition();
};


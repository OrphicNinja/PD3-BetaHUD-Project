#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "SBZBTDecorator_TaskFailTracker.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_TaskFailTracker : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_TaskFailTracker();
};


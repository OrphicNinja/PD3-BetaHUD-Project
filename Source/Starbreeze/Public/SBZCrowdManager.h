#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdManager -FallbackName=CrowdManager
#include "SBZCrowdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZCrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
    USBZCrowdManager();
};


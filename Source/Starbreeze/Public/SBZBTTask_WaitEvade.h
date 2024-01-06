#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_WaitEvade.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_WaitEvade : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_WaitEvade();
};


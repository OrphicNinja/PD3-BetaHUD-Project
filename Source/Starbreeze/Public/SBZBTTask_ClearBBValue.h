#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "SBZBTTask_ClearBBValue.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_ClearBBValue : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_ClearBBValue();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "SBZBTTask_Revive.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_Revive : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_Revive();
};


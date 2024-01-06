#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_LifeActionWaitForStart.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_LifeActionWaitForStart : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_LifeActionWaitForStart();
};


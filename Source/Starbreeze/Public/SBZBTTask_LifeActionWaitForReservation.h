#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_LifeActionWaitForReservation.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_LifeActionWaitForReservation : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_LifeActionWaitForReservation();
};


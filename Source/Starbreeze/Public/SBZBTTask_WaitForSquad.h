#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_WaitForSquad.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_WaitForSquad : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_WaitForSquad();
};


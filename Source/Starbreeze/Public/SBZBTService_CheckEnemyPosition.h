#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "SBZBTService_CheckEnemyPosition.generated.h"

UCLASS(Blueprintable)
class USBZBTService_CheckEnemyPosition : public UBTService {
    GENERATED_BODY()
public:
    USBZBTService_CheckEnemyPosition();
};


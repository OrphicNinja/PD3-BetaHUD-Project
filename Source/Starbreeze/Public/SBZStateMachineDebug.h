#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SBZStateMachineDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZStateMachineDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZStateMachineDebug();
};


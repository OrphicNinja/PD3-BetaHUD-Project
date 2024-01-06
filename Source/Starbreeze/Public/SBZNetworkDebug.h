#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SBZNetworkDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZNetworkDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZNetworkDebug();
};


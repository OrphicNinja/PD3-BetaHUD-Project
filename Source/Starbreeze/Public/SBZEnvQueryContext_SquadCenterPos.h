#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "SBZEnvQueryContext_SquadCenterPos.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZEnvQueryContext_SquadCenterPos : public UEnvQueryContext {
    GENERATED_BODY()
public:
    USBZEnvQueryContext_SquadCenterPos();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "SBZEnvQueryContext_SquadTacticalPos.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZEnvQueryContext_SquadTacticalPos : public UEnvQueryContext {
    GENERATED_BODY()
public:
    USBZEnvQueryContext_SquadTacticalPos();
};


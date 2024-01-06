#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "SBZEnvQueryContext_OrderTargetActor.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USBZEnvQueryContext_OrderTargetActor : public UEnvQueryContext {
    GENERATED_BODY()
public:
    USBZEnvQueryContext_OrderTargetActor();
};


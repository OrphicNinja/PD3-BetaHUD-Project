#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "SBZEnvQueryContext_Ward.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USBZEnvQueryContext_Ward : public UEnvQueryContext {
    GENERATED_BODY()
public:
    USBZEnvQueryContext_Ward();
};


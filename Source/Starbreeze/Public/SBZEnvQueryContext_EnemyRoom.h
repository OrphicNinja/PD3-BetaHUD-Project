#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "SBZEnvQueryContext_EnemyRoom.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USBZEnvQueryContext_EnemyRoom : public UEnvQueryContext {
    GENERATED_BODY()
public:
    USBZEnvQueryContext_EnemyRoom();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "SBZAISenseConfig_Touch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAISenseConfig_Touch : public UAISenseConfig {
    GENERATED_BODY()
public:
    USBZAISenseConfig_Touch();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "SBZAISenseConfig_Team.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAISenseConfig_Team : public UAISenseConfig {
    GENERATED_BODY()
public:
    USBZAISenseConfig_Team();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "SBZGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    USBZGameEngine();
};


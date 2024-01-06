#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Console -FallbackName=Console
#include "SBZConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZConsole : public UConsole {
    GENERATED_BODY()
public:
    USBZConsole();
};


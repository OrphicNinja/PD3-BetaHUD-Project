#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZUtilityPlugin -ObjectName=SBZGameModeBase -FallbackName=SBZGameModeBase
#include "SBZGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZGameMode : public ASBZGameModeBase {
    GENERATED_BODY()
public:
    ASBZGameMode();
};


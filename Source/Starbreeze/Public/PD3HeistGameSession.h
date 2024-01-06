#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZUtilityPlugin -ObjectName=SBZGameSessionBase -FallbackName=SBZGameSessionBase
#include "PD3HeistGameSession.generated.h"

UCLASS(Blueprintable)
class APD3HeistGameSession : public ASBZGameSessionBase {
    GENERATED_BODY()
public:
    APD3HeistGameSession();
};


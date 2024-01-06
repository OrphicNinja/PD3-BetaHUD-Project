#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "SBZGameStateBase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    ASBZGameStateBase();
};


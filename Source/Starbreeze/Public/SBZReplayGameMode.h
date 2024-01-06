#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "SBZReplayGameMode.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class STARBREEZE_API ASBZReplayGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ASBZReplayGameMode();
};


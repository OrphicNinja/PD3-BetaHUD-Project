#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "SBZSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class ASBZSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    ASBZSpectatorPawn();
};


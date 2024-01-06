#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SBZAirNavigationBoundsVolume.generated.h"

UCLASS(Blueprintable)
class ASBZAirNavigationBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZAirNavigationBoundsVolume();
};


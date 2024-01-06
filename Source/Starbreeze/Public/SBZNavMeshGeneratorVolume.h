#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SBZNavMeshGeneratorVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNavMeshGeneratorVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZNavMeshGeneratorVolume();
};


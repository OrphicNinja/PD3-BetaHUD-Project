#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "SBZNoCookDS.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNoCookDS : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASBZNoCookDS();
};


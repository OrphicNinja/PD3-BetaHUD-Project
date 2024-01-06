#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZStaticReplicatedActor.generated.h"

UCLASS(Blueprintable)
class ASBZStaticReplicatedActor : public AActor {
    GENERATED_BODY()
public:
    ASBZStaticReplicatedActor();
};


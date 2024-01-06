#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZVantagePoint.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZVantagePoint : public AActor {
    GENERATED_BODY()
public:
    ASBZVantagePoint();
    UFUNCTION(BlueprintCallable)
    void OnOccupantKilled(APawn* Pawn);
    
};


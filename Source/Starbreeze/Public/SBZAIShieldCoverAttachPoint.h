#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZAIShieldCoverAttachPoint.generated.h"

class APawn;
class ASBZAIShieldCoverAttachPoint;

UCLASS(Blueprintable)
class ASBZAIShieldCoverAttachPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Occupier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIShieldCoverAttachPoint*> BlockingCovers;
    
public:
    ASBZAIShieldCoverAttachPoint();
};

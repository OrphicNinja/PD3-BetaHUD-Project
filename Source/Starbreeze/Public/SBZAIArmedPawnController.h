#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "SBZFactionIdHelper.h"
#include "SBZAIArmedPawnController.generated.h"

UCLASS(Blueprintable)
class ASBZAIArmedPawnController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
public:
    ASBZAIArmedPawnController();
};


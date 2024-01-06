#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSParametrizedQueryExecutionRequest -FallbackName=EQSParametrizedQueryExecutionRequest
#include "Templates/SubclassOf.h"
#include "SBZAIRepositionType.generated.h"

class USBZAIRepositionPredicate;

USTRUCT(BlueprintType)
struct FSBZAIRepositionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIRepositionPredicate> Predicate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    STARBREEZE_API FSBZAIRepositionType();
};


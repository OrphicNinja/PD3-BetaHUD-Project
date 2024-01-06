#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "SBZBTTask_MarkAsCriminal.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_MarkAsCriminal : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SuspectKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuspectCrimeStatus;
    
public:
    USBZBTTask_MarkAsCriminal();
};


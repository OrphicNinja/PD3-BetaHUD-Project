#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "SBZBTDecorator_Evade.h"
#include "SBZBTDecorator_ShieldCoverEvade.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_ShieldCoverEvade : public USBZBTDecorator_Evade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShieldCoverBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGoBack;
    
public:
    USBZBTDecorator_ShieldCoverEvade();
};


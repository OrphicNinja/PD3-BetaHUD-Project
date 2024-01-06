#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ESBZAbilityInput.h"
#include "SBZBTTask_TriggerAbilityUnsafe.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_TriggerAbilityUnsafe : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAbilityInput AbilityInput;
    
public:
    USBZBTTask_TriggerAbilityUnsafe();
};


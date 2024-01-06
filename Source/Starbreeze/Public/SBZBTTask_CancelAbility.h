#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ESBZAbilityInput.h"
#include "SBZBTTask_CancelAbility.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_CancelAbility : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAbilityInput AbilityInput;
    
public:
    USBZBTTask_CancelAbility();
};


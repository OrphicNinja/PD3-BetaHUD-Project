#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZAIGrenadeBeltDamageExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZAIGrenadeBeltDamageExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZAIGrenadeBeltDamageExecutionCalculation();
};


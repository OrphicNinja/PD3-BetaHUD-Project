#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZFallDamageExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZFallDamageExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZFallDamageExecutionCalculation();
};


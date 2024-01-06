#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZMeleeDamageExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZMeleeDamageExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZMeleeDamageExecutionCalculation();
};


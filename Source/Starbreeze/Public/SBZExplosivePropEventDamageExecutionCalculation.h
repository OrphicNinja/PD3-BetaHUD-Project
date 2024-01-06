#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZExplosivePropEventDamageExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZExplosivePropEventDamageExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZExplosivePropEventDamageExecutionCalculation();
};


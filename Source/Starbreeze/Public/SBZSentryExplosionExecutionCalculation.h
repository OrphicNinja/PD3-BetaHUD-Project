#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZSentryExplosionExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZSentryExplosionExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZSentryExplosionExecutionCalculation();
};


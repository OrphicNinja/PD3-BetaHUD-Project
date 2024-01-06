#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZSentryGunOverheatExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZSentryGunOverheatExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZSentryGunOverheatExecutionCalculation();
};


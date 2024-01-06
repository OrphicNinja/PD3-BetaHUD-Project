#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZAICloakerMeleeExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZAICloakerMeleeExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZAICloakerMeleeExecutionCalculation();
};


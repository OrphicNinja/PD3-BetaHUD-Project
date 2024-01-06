#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZMeleeWeaponExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZMeleeWeaponExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZMeleeWeaponExecutionCalculation();
};


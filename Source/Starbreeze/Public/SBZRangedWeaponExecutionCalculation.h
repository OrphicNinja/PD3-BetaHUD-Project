#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZRangedWeaponExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZRangedWeaponExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZRangedWeaponExecutionCalculation();
};


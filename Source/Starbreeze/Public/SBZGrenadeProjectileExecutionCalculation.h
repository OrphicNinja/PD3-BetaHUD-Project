#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZGrenadeProjectileExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class USBZGrenadeProjectileExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZGrenadeProjectileExecutionCalculation();
};


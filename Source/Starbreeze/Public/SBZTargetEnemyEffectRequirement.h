#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "SBZTargetEnemyEffectRequirement.generated.h"

UCLASS(Blueprintable)
class USBZTargetEnemyEffectRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
    USBZTargetEnemyEffectRequirement();
};


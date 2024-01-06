#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZRangedWeaponEffect.generated.h"

UCLASS(Blueprintable)
class USBZRangedWeaponEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZRangedWeaponEffect();
};


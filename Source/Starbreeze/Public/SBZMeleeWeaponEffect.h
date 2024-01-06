#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZMeleeWeaponEffect.generated.h"

UCLASS(Blueprintable)
class USBZMeleeWeaponEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZMeleeWeaponEffect();
};


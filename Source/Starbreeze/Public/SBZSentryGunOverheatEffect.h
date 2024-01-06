#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZSentryGunOverheatEffect.generated.h"

UCLASS(Blueprintable)
class USBZSentryGunOverheatEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSentryGunOverheatEffect();
};


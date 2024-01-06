#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZVolumeDamageEffect.generated.h"

UCLASS(Blueprintable)
class USBZVolumeDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZVolumeDamageEffect();
};


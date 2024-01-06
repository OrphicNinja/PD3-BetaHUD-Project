#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZLandingEffect.generated.h"

UCLASS(Blueprintable)
class USBZLandingEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZLandingEffect();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZApplyMarkedTagEffect.generated.h"

UCLASS(Blueprintable)
class USBZApplyMarkedTagEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZApplyMarkedTagEffect();
};


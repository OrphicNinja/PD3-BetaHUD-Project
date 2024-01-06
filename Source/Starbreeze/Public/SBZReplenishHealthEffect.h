#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZReplenishHealthEffect.generated.h"

UCLASS(Blueprintable)
class USBZReplenishHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZReplenishHealthEffect();
};


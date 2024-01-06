#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZActivateReplenishHealthEffect.generated.h"

UCLASS(Blueprintable)
class USBZActivateReplenishHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZActivateReplenishHealthEffect();
};


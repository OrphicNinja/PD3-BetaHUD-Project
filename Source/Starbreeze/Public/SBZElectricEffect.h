#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZElectricEffect.generated.h"

UCLASS(Blueprintable)
class USBZElectricEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZElectricEffect();
};


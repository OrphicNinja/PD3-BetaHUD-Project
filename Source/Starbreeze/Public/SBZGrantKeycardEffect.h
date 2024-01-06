#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZGrantKeycardEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZGrantKeycardEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZGrantKeycardEffect();
};


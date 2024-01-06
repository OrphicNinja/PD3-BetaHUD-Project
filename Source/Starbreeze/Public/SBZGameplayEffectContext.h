#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContext -FallbackName=GameplayEffectContext
#include "SBZGameplayEffectContext.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZGameplayEffectContext();
};


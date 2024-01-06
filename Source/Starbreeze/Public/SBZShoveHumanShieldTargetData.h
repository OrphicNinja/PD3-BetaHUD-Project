#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZShoveHumanShieldTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZShoveHumanShieldTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZShoveHumanShieldTargetData();
};


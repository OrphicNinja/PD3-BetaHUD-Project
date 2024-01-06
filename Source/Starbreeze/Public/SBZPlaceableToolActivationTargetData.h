#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZPlaceableToolActivationTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlaceableToolActivationTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZPlaceableToolActivationTargetData();
};


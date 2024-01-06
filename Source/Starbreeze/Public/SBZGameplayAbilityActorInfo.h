#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityActorInfo -FallbackName=GameplayAbilityActorInfo
#include "SBZGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZGameplayAbilityActorInfo();
};


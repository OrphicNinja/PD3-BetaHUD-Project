#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemGlobals -FallbackName=AbilitySystemGlobals
#include "SBZAbilitySystemGlobals.generated.h"

UCLASS(Blueprintable)
class USBZAbilitySystemGlobals : public UAbilitySystemGlobals {
    GENERATED_BODY()
public:
    USBZAbilitySystemGlobals();
};


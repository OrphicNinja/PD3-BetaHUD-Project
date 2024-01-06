#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "SBZEquippableCharmAnimation.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class USBZEquippableCharmAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
    USBZEquippableCharmAnimation();
};


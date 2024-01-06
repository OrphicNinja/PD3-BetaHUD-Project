#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZMeleeHitNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZMeleeHitNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZMeleeHitNotify();
};


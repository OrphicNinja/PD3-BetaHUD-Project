#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZCloakerMeleeHitNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZCloakerMeleeHitNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZCloakerMeleeHitNotify();
};


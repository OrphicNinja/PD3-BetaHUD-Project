#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZToolVisibleNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZToolVisibleNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZToolVisibleNotify();
};


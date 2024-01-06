#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZToolEquippedNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZToolEquippedNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZToolEquippedNotify();
};


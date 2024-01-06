#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZToolInvisibleNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZToolInvisibleNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZToolInvisibleNotify();
};


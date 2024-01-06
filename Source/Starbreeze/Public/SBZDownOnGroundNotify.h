#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZDownOnGroundNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZDownOnGroundNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZDownOnGroundNotify();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZToolReleaseNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZToolReleaseNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZToolReleaseNotify();
};


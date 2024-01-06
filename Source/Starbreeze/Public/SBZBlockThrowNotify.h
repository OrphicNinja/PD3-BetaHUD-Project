#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZBlockThrowNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZBlockThrowNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZBlockThrowNotify();
};


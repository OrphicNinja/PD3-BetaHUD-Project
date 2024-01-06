#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZDialogBodyGestureEndNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZDialogBodyGestureEndNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZDialogBodyGestureEndNotify();
};


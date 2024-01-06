#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZMicroCameraActivateNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZMicroCameraActivateNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZMicroCameraActivateNotify();
};


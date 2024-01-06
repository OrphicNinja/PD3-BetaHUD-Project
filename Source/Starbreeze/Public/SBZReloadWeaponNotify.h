#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZReloadWeaponNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZReloadWeaponNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USBZReloadWeaponNotify();
};


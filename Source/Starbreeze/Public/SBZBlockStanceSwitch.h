#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZBlockStanceSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZBlockStanceSwitch : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZBlockStanceSwitch();
};


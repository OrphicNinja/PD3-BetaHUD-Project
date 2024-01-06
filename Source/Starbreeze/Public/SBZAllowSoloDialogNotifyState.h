#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZAllowSoloDialogNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAllowSoloDialogNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZAllowSoloDialogNotifyState();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZDisableSpeedWarpingNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZDisableSpeedWarpingNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZDisableSpeedWarpingNotifyState();
};


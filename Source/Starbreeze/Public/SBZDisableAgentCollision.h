#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZDisableAgentCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZDisableAgentCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZDisableAgentCollision();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "ESBZDisabledAimOffsetType.h"
#include "SBZDisableAimOffsetNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZDisableAimOffsetNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDisabledAimOffsetType DisableAimOffsetType;
    
public:
    USBZDisableAimOffsetNotifyState();
};


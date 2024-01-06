#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZDialogBodyGesturesNotifyState.generated.h"

class USBZDialogBodyGesturesData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZDialogBodyGesturesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogBodyGesturesData* DialogBodyGesturesData;
    
    USBZDialogBodyGesturesNotifyState();
};


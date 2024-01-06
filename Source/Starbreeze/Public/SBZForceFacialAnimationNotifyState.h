#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZForceFacialAnimationNotifyState.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZForceFacialAnimationNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* FacialAnimation;
    
    USBZForceFacialAnimationNotifyState();
};


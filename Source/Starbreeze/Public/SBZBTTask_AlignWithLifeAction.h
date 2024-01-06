#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ESBZLifeActionAlignmentMode.h"
#include "SBZBTTask_AlignWithLifeAction.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_AlignWithLifeAction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAlignmentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDurationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLifeActionAlignmentMode AlignmentMode;
    
public:
    USBZBTTask_AlignWithLifeAction();
};


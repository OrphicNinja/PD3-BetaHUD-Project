#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "SBZStateMachineDataWaitActionPhase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataWaitActionPhase : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetLevelIdx;
    
    USBZStateMachineDataWaitActionPhase();
};


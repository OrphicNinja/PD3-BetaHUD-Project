#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "SBZReplayInfo.h"
#include "SBZStateMachineDataReplay.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataReplay : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZReplayInfo Params;
    
    USBZStateMachineDataReplay();
};


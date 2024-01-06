#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "SBZRestartLevelInfo.h"
#include "SBZStateMachineDataRestartLevel.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataRestartLevel : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRestartLevelInfo Params;
    
    USBZStateMachineDataRestartLevel();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "ESBZReturnToIISReason.h"
#include "SBZStateMachineDataIIS.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataIIS : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReturnToIISReason ReturnReason;
    
    USBZStateMachineDataIIS();
};


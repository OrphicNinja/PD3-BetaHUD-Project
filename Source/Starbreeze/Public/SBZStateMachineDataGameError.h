#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "ESBZGameMachineStateError.h"
#include "SBZStateMachineDataGameError.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataGameError : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGameMachineStateError ErrorType;
    
    USBZStateMachineDataGameError();
};


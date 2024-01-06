#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachineData -FallbackName=SBZStateMachineData
#include "ESBZReturnToSubsystemInitialisationReason.h"
#include "SBZStateMachineDataSubsystemInitialisation.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataSubsystemInitialisation : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReturnToSubsystemInitialisationReason ReturnReason;
    
    USBZStateMachineDataSubsystemInitialisation();
};


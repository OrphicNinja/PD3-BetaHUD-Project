#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZStateMachineBase -ObjectName=SBZStateMachine -FallbackName=SBZStateMachine
#include "SBZCommonStateMachine.generated.h"

class ASBZPlayerState;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZCommonStateMachine : public USBZStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerState*> PlayersReadyStatus;
    
    USBZCommonStateMachine();
};


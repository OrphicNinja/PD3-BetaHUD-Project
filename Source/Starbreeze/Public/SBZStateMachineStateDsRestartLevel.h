#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SBZDsStateMachineState.h"
#include "SBZPreplanningAsset.h"
#include "SBZStateMachineStateDsRestartLevel.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsRestartLevel : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPreplanningAsset> PreplanningAssets;
    
public:
    USBZStateMachineStateDsRestartLevel();
private:
    UFUNCTION(BlueprintCallable)
    void OnClientStartSeamlessTravel(const FUniqueNetIdRepl& PlayerId);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZInteractReqData.h"
#include "SBZBaseInteractRequirement.generated.h"

class USBZInteractorComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZBaseInteractRequirement : public UObject {
    GENERATED_BODY()
public:
    USBZBaseInteractRequirement();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CheckRequirement(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const;
    
};


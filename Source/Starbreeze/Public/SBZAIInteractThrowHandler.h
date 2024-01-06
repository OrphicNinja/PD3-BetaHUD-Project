#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZBagHandle.h"
#include "SBZAIInteractThrowHandler.generated.h"

class ASBZBagItem;
class ASBZBagTriggerVolume;

UCLASS(Blueprintable)
class USBZAIInteractThrowHandler : public UObject {
    GENERATED_BODY()
public:
    USBZAIInteractThrowHandler();
    UFUNCTION(BlueprintCallable)
    void OnThrowBagInteractionCompleted(ASBZBagTriggerVolume* Volume, ASBZBagItem* BagItem, FSBZBagHandle BagHandle);
    
};


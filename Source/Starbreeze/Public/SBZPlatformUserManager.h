#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZUIStackChangedEvent.h"
#include "SBZPlatformUserManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlatformUserManager : public UObject {
    GENERATED_BODY()
public:
    USBZPlatformUserManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpClosedConfirmChanges(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
};


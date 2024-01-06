#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSettingsFunctions.generated.h"

UCLASS(Blueprintable)
class USBZSettingsFunctions : public UObject {
    GENERATED_BODY()
public:
    USBZSettingsFunctions();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetButtonVisibilityAlways(UObject* WorldContextObject);
    
};


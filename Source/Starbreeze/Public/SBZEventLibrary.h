#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZEventLibrary.generated.h"

class UObject;
class USBZGameEventBroker;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEventLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZEventLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZGameEventBroker* GetGameEventBroker(const UObject* WorldContextObject);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZBagHandle.h"
#include "SBZBagHandleLibrary.generated.h"

UCLASS(Blueprintable)
class USBZBagHandleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZBagHandleLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FSBZBagHandle& BagHandle);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESBZMetaEventType.h"
#include "SBZMetaEventData.h"
#include "SBZMetaEventModifierData.h"
#include "SBZMetaFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMetaFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMetaFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZMetaEventType GetActiveMetaEventType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetActiveMetaEventModifiers(const UObject* WorldContextObject, TArray<FSBZMetaEventModifierData>& MetaEventModifiers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetActiveMetaEvent(const UObject* WorldContextObject, FSBZMetaEventData& OutMetaEvent);
    
};


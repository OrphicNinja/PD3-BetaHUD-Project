#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "SBZAIOrderDebugBlueprintLibrary.generated.h"

class UObject;
class USBZAISquadOrder;

UCLASS(Blueprintable)
class USBZAIOrderDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIOrderDebugBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetOrderToAllSquads(UObject* ContextObject, TSubclassOf<USBZAISquadOrder> AIOrder);
    
};


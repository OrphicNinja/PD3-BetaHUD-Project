#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAIInteractBreakGlassHandler.generated.h"

UCLASS(Blueprintable)
class USBZAIInteractBreakGlassHandler : public UObject {
    GENERATED_BODY()
public:
    USBZAIInteractBreakGlassHandler();
    UFUNCTION(BlueprintCallable)
    void OnBreakGlassInteractionCompleted();
    
};


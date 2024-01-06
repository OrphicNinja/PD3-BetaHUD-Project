#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SBZWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    USBZWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetPreRemovedFromParent();
    
};


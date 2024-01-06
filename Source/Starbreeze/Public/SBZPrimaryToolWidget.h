#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SBZPrimaryToolWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZPrimaryToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZPrimaryToolWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoAmmoTriggered(float VisibilityTime);
    
};


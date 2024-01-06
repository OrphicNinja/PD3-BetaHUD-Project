#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SBZWidgetBase.h"
#include "SBZVoipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZVoipWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZVoipWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTalkingChangedEvent(const FString& PlayerName, bool bPlayerTalking);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTalkingChanged(FUniqueNetIdRepl PlayerId, bool IsTalking);
    
};


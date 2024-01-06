#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonGamepadBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonGamepadBinding : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord PrimaryBinding;
    
public:
    USBZSettingsButtonGamepadBinding();
    UFUNCTION(BlueprintCallable)
    void SetPrimaryBinding(FInputChord InBinding);
    
};


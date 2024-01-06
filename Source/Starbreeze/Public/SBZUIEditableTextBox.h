#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "OnMaxInputLengthReachedDelegate.h"
#include "SBZUIEditableTextBox.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=StarbreezeUI)
class STARBREEZE_API USBZUIEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaxInputLengthReached OnMaxInputLengthReachedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUserTextLengthLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxInputLength;
    
public:
    USBZUIEditableTextBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyOrConsistsOfWhitespaces(const FString& InString) const;
    
};


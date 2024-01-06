#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "SBZSettingsFunctions.h"
#include "SBZSettingsFunctionsKeyboard.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZSettingsFunctionsKeyboard : public USBZSettingsFunctions {
    GENERATED_BODY()
public:
    USBZSettingsFunctionsKeyboard();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale, FInputChord Binding);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale, FInputChord Binding);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetDefaultSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetDefaultPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale);
    
};


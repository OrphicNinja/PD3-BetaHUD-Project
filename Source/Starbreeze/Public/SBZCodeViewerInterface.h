#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZCodeViewerInterface.generated.h"

class UWidgetComponent;

UINTERFACE(Blueprintable)
class USBZCodeViewerInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZCodeViewerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCodeViewer(const TArray<int32>& GeneratedCodes, const int32 TrueCodeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeWidget(UWidgetComponent* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumberOfCodeWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCode(UWidgetComponent* Widget, int32 CodeToShow);
    
};


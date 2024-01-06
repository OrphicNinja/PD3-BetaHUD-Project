#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SBZToolHackableInterface.generated.h"

class USBZHackableInteractableComponent;
class USBZHackingComponent;
class USBZMiniGameComponent;

UINTERFACE(Blueprintable)
class USBZToolHackableInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZToolHackableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFromWorldRuntime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncAborted(bool bInIsSynchedAlready);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HighlightHackable(bool bInHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZHackingComponent* GetHackingComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZMiniGameComponent* GetHackableMiniGameComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHackableLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZHackableInteractableComponent* GetHackableInteractableComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToWorldRuntime();
    
};


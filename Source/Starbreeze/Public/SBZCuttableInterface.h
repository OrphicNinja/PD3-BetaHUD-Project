#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ESBZCuttableState.h"
#include "SBZCuttableInterface.generated.h"

class UNiagaraComponent;
class USBZCuttableComponent;
class USBZCuttableSplineComponent;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class USBZCuttableInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZCuttableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCuttableStateChanged(ESBZCuttableState NewCuttableState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* GetNiagaraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetMeltingMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZCuttableSplineComponent* GetCuttableSplineComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZCuttableComponent* GetCuttableComponent();
    
};


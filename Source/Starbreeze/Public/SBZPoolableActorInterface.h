#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZPoolableActorInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZPoolableActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZPoolableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnpooled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPooled();
    
};


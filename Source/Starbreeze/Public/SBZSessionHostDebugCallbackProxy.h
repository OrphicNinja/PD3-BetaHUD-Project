#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZSessionHostDebugCallbackProxy.generated.h"

class UObject;
class USBZSessionHostDebugCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionHostDebugCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZSessionHostDebugCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionHostDebugCallbackProxy* SessionHostDebug(UObject* NewWorldContextObject);
    
};


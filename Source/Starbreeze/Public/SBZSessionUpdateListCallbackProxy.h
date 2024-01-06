#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnOnlineSessionSearchEventDelegateDelegate.h"
#include "SBZOnlineSessionParams.h"
#include "SBZSessionUpdateListCallbackProxy.generated.h"

class UObject;
class USBZSessionUpdateListCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionUpdateListCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionSearchEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZSessionUpdateListCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionUpdateListCallbackProxy* SessionUpdateList(UObject* NewWorldContextObject, const FSBZOnlineSessionParams& InSearchParams);
    
};


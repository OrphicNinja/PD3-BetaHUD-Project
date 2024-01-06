#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZSessionLeavePartyCallbackProxy.generated.h"

class UObject;
class USBZSessionLeavePartyCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionLeavePartyCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZSessionLeavePartyCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionLeavePartyCallbackProxy* SessionLeaveParty(UObject* NewWorldContextObject);
    
};


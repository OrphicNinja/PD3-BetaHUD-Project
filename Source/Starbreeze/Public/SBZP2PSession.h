#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZOnSessionJoinStartedDelegate.h"
#include "SBZOnSessionJoinedDelegate.h"
#include "SBZP2PSession.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZP2PSession : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoined OnSessionJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoinStarted OnSessionJoinStarted;
    
    USBZP2PSession();
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded(UWorld* InWorld);
    
};


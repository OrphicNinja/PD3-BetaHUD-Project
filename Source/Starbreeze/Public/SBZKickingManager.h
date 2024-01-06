#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ESBZKickingMode.h"
#include "OnClientWasKickedDelegate.h"
#include "OnKickFailedDelegate.h"
#include "OnKickInfoChangedDelegate.h"
#include "SBZKickingInfo.h"
#include "SBZKickingManager.generated.h"

UCLASS(Blueprintable, Config=Starbreeze)
class STARBREEZE_API USBZKickingManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZKickingInfo CurrentKickingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FDateTime> RecentlyAttemptedKicks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickInfoChanged OnKickInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickFailed OnKickFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientWasKicked OnClientWasKicked;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToKick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBeKickedAgainOnFailedKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasClientRecentlyKicked;
    
    USBZKickingManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KickPlayer(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick);
    
};


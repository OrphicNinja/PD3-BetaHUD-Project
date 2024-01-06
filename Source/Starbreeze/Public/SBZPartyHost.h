#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ESBZOnlineCode.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "OnPartyHostUpdatedDelegateDelegate.h"
#include "SBZPartyMemberInfo.h"
#include "SBZPartyHost.generated.h"

class APlayerState;

UCLASS(Blueprintable, NotPlaceable, Transient)
class STARBREEZE_API USBZPartyHost : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnPartyJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyHostUpdatedDelegate OnPartyUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPartyMemberInfo> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyTravelTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyDisconnectTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> TravellingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TravelTimeoutTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> LeavingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LeaveLobbyTimeoutTimer;
    
public:
    USBZPartyHost();
    UFUNCTION(BlueprintCallable)
    void NotifyClientLeftLobby(const FUniqueNetIdRepl& PartyMemberId);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientFailedConnectionToLobby(const FUniqueNetIdRepl& PartyMemberNetId);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientConnectedToLobby(const FUniqueNetIdRepl& PartyMemberNetId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePartyTravelTimeout();
    
    UFUNCTION(BlueprintCallable)
    void HandlePartyLeaveLobbyTimeout();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FirePartyUpdated(APlayerState* ChangedPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastPartyTravelled(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPartyLeftLobby(ESBZOnlineCode Result);
    
};


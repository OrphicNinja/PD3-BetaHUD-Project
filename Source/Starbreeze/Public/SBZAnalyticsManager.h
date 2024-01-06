#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESBZCheaterPolicyType.h"
#include "ESBZNotOwningHeistPolicyType.h"
#include "SBZChallengeData.h"
#include "SBZAnalyticsManager.generated.h"

class USBZAnalyticsProvider;
class USBZInfamyManager;

UCLASS(Blueprintable)
class USBZAnalyticsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAnalyticsProvider* AnalyticsProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime GameLaunchedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastScreenUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* HeartbeatWorldContextObject;
    
public:
    USBZAnalyticsManager();
    UFUNCTION(BlueprintCallable)
    void SendSyncDLC(const bool bIsSyncDLCSuccessful, const FString& SyncDLCFailureMessage);
    
    UFUNCTION(BlueprintCallable)
    void SendNotOwningHeistDetected(const ESBZNotOwningHeistPolicyType NotOwningHeistAction, const bool bIsActionSuccessful, const FString& Description, const FString& AdditionalInformation);
    
    UFUNCTION(BlueprintCallable)
    void SendInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience);
    
    UFUNCTION(BlueprintCallable)
    void SendCheaterDetected(const ESBZCheaterPolicyType AntiCheatAction, const bool bIsCheatActionSuccessful, const FString& CheatTypeString, const FString& AdditionalInformation);
    
    UFUNCTION(BlueprintCallable)
    void SendChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SBZSlotData.h"
#include "SBZOnlineSlotsSync.generated.h"

class AGameModeBase;
class APlayerState;
class ASBZPlayerState;
class USBZOnlineSession;

UCLASS(Blueprintable)
class ASBZOnlineSlotsSync : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlotsData, meta=(AllowPrivateAccess=true))
    TArray<FSBZSlotData> SlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSession* OnlineSession;
    
public:
    ASBZOnlineSlotsSync();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerName(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlatform(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfamyLevel(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UniqueIdUpdated(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SyncSlotsData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SlotsData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemovePlayerState(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeInitialized(AGameModeBase* GameMode);
    
    UFUNCTION(BlueprintCallable)
    void OnAddPlayerState(APlayerState* PlayerState);
    
};


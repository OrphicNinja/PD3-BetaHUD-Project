#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EPD3HeistState.h"
#include "PD3VehicleSpawnRequest.h"
#include "SBZDamageEvent.h"
#include "Templates/SubclassOf.h"
#include "PD3AssaultManager.generated.h"

class APD3PawnSpawnGroup;
class APawn;
class ASBZSpline;
class UPD3AssaultManager;
class UPD3AssaultSettings;
class USBZAISquadOrder;
class USBZAssaultVehicleSpawnerData;
class USBZSpawnManager;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class STARBREEZE_API UPD3AssaultManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3AssaultSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZAISquadOrder>> CachedSpawnOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APD3PawnSpawnGroup*> SpawnGroupSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CountedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ECMBlockedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPD3VehicleSpawnRequest> VehicleSpawnRequests;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowableTypeCooldown[5];
    
public:
    UPD3AssaultManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartEndlessAssault();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVehicleSpawnEnabled(ASBZSpline* Spline, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelProgression(float InLevelProgression);
    
    UFUNCTION(BlueprintCallable)
    void SetAssaultActive(bool bIsActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RequestVehicleSpawn(USBZAssaultVehicleSpawnerData* VehicleData, ASBZSpline* EnterSpline, ASBZSpline* ExitSpline);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayersAliveChanged(const TArray<UObject*>& Players);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilled(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTakenEvent(const FSBZDamageEvent& DamageEventdata);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssaultActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPD3AssaultManager* Get(const UObject* WorldContextObject);
    
};


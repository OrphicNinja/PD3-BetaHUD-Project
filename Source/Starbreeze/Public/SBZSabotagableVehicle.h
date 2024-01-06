#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZOnVehicleEscortChangedDelegate.h"
#include "SBZOnVehicleSabotageChangedDelegate.h"
#include "SBZWheeledVehicle.h"
#include "Templates/SubclassOf.h"
#include "SBZSabotagableVehicle.generated.h"

class AActor;
class ASBZSabotagePoint;
class UCapsuleComponent;
class UPrimitiveComponent;
class USBZPredefinedBoxNavModifierComponent;

UCLASS(Blueprintable)
class ASBZSabotagableVehicle : public ASBZWheeledVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnVehicleSabotageChanged OnVehicleSabotageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnVehicleEscortChanged OnVehicleEscortChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZSabotagePoint> SabotagePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPredefinedBoxNavModifierComponent* MovingNavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SabotageAreaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSabotagePoint* SabotagePointInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* EscortCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayersOverlapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EscortModeEnabled, meta=(AllowPrivateAccess=true))
    bool bEscortModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithEscortModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EscortSizePreplanningTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCapsulePreplanningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCapsulePreplanningHalfHeight;
    
public:
    ASBZSabotagableVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSabotageVehicle();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnSabotagePoint();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEscortModeEnabled(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnStartedFollowingSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnSabotaged(bool bWasSabotaged);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EscortModeEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPathEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnEscortCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEscortCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEscortModeEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnPlayersInEscortChanged(const int32 PlayersEscorting);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnEscortSizePreplanningApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnEscortModeChanged(bool bEnabled, bool bDoCosmetics);
    
};


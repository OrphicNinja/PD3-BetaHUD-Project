#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPD3HeistState.h"
#include "SBZLaserPattern.h"
#include "SBZLaserPointConnection.h"
#include "SBZOnLaserGridTriggeredDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZLaserGrid.generated.h"

class UAkAudioEvent;
class UBoxComponent;
class UPrimitiveComponent;
class USBZAmbientSoundComponent;
class USBZLaser;

UCLASS(Blueprintable)
class ASBZLaserGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnLaserGridTriggered OnLaserGridTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLaser> LaserComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLaserPointConnection> LaserConnectionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HitBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisableOnAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUsePatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLaserPattern> LaserPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatternCyclingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaserAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZLaser*> CachedLaserArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> CachedBoxArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAmbientSoundComponent*> CachedAmbientSoundArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPatternIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentPatternIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    ASBZLaserGrid();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCyclingPatterns();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartCyclingPatterns();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPatternIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NextPattern();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_NextPattern();
    
    UFUNCTION(BlueprintCallable)
    void BlockingActorEntered(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

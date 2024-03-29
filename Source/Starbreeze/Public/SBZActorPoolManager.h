#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "SBZActorPool.h"
#include "Templates/SubclassOf.h"
#include "SBZActorPoolManager.generated.h"

class AActor;
class UObject;
class USBZActorPoolManager;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZActorPoolManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FSBZActorPool> Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FTimerHandle> ReturnActorTimerHandles;
    
public:
    USBZActorPoolManager();
    UFUNCTION(BlueprintCallable)
    void ReturnActor(AActor* Actor, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void InitPool(UWorld* World, TSubclassOf<AActor> ActorClass, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActor(UWorld* World, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZActorPoolManager* Get(const UObject* WorldContextObject);
    
};


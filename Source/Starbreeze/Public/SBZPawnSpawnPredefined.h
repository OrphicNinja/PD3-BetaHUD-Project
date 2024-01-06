#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "SBZKilledPawnSpawnPredefinedDelegateDelegate.h"
#include "SBZPawnSpawnBase.h"
#include "SBZPawnSpawnRequest.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "SBZSpawnRequestCompletedDelegateDelegate.h"
#include "SBZPawnSpawnPredefined.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class ASBZPawnSpawnPredefined : public ASBZPawnSpawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpawningMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod OverridenSpawningMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRandomMeshScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZKilledPawnSpawnPredefinedDelegate KilledPawnDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PredefinedRequestActionActorRef;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnRequestCompletedDelegate SpawnedPawnDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnSpawnRequest PredefinedPawnRequest;
    
    ASBZPawnSpawnPredefined();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnPredefinedLatent(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    FSBZPawnSpawnRequestHandle SpawnPredefined();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedPawnKilled(APawn* Pawn);
    
};


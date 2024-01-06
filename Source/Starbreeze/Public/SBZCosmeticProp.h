#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZAnimationSpawnedActorCPD.h"
#include "SBZPoolableActorInterface.h"
#include "SBZCosmeticProp.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class ASBZCosmeticProp : public AActor, public ISBZPoolableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshArray;
    
public:
    ASBZCosmeticProp();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveCPDs(const TArray<FSBZAnimationSpawnedActorCPD>& CPDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDropped();
    
    
    // Fix for true pure virtual functions not being implemented
};


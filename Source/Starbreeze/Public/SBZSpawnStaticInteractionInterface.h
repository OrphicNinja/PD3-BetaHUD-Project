#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SBZSpawnStaticInteractionInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable)
class USBZSpawnStaticInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZSpawnStaticInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PopulateSpawnInformationMap(TMap<USceneComponent*, FTransform>& InOutSpawnDataMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorSpawned(AActor* SpawnedActor, USceneComponent* AttachParent);
    
};


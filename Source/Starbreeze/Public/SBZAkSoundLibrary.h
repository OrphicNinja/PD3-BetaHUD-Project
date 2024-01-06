#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=ESBZAkPoolType -FallbackName=ESBZAkPoolType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZAkSoundLibrary.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class USceneComponent;

UCLASS(Blueprintable)
class USBZAkSoundLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAkSoundLibrary();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, ESBZAkPoolType PoolType, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy);
    
};


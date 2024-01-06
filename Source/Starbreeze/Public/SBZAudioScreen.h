#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ESBZEventReactorState.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZAudioScreen.generated.h"

class ASBZRoomVolume;
class UAkCallbackInfo;
class UAkComponent;

UCLASS(Blueprintable)
class ASBZAudioScreen : public AActor, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEventReactorState CurrentReactorState;
    
public:
    ASBZAudioScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioEventComplete(EAkCallbackType Type, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReactorStateChanged(ESBZEventReactorState NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};


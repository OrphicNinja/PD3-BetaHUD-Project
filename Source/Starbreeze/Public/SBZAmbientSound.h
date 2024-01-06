#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZAmbientSound.generated.h"

class UActorComponent;
class USBZAmbientSoundComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAmbientSound : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundComponent* AmbientSoundComponent;
    
public:
    ASBZAmbientSound();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDeactivateSoundComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void HandleActivateSoundComponent(UActorComponent* Component, bool bReset);
    
};


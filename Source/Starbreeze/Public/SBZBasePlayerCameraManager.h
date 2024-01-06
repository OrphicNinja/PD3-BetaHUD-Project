#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "SBZBasePlayerCameraManager.generated.h"

class UAkComponent;

UCLASS(Blueprintable, NonTransient)
class ASBZBasePlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> DefaultListenerComponentArray;
    
    ASBZBasePlayerCameraManager();
};


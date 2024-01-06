#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "SBZLocalPlayer.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NonTransient)
class USBZLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USBZLocalPlayer();
};


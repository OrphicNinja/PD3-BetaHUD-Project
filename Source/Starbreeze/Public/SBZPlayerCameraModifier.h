#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "SBZPlayerCameraModifier.generated.h"

UCLASS(Abstract, Blueprintable)
class USBZPlayerCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USBZPlayerCameraModifier();
};


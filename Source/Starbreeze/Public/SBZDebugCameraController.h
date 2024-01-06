#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "SBZDebugCameraController.generated.h"

UCLASS(Blueprintable)
class ASBZDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ASBZDebugCameraController();
};


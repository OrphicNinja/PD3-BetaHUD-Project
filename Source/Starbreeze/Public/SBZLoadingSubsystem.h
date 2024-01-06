#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "SBZLoadingSubsystem.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLoadingSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    USBZLoadingSubsystem();
};


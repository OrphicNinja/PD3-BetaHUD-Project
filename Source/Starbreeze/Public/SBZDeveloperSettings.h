#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SBZDeveloperSettings.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USBZDeveloperSettings();
};


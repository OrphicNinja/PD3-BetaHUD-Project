#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZGamepadBindingsPreset.h"
#include "SBZGamepadBindingsPresetsConfig.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZGamepadBindingsPresetsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGamepadBindingsPreset> GamepadBindingsPresets;
    
    USBZGamepadBindingsPresetsConfig();
};


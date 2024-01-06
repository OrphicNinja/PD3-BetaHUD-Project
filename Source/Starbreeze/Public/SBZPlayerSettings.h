#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "SBZDeveloperSettings.h"
#include "SBZKeyPropertyModeData.h"
#include "SBZLookInputSettings.h"
#include "SBZPlayerSettings.generated.h"

UCLASS(Blueprintable)
class USBZPlayerSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputSettings LookInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FSBZKeyPropertyModeData> KeyPropertyModeMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDelay;
    
    USBZPlayerSettings();
};


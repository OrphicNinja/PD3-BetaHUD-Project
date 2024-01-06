#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ESBZPlatform.h"
#include "SBZPawnPlatformSpawnSettings.h"
#include "SBZPawnSpawnSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZPawnSpawnSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnPlatformSpawnSettings DefaultSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZPlatform, FSBZPawnPlatformSpawnSettings> PlatformSettingMap;
    
public:
    USBZPawnSpawnSettings();
};


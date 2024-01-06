#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSessionSettingQueueItem.h"
#include "SBZSessionSettings.generated.h"

class USBZOnlineSessionSettingsManager;

UCLASS(Blueprintable)
class USBZSessionSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSessionSettingQueueItem> SessionSettingsQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionSettingsManager* SessionSettingsManager;
    
public:
    USBZSessionSettings();
};


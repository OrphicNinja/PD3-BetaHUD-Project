#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZOnlineSessionSettingsManager.generated.h"

class USBZSessionSettings;

UCLASS(Blueprintable)
class USBZOnlineSessionSettingsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSessionSettings* PartySessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSessionSettings* GameSessionSettings;
    
public:
    USBZOnlineSessionSettingsManager();
};


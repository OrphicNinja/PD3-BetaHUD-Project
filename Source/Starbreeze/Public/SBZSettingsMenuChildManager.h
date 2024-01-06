#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSettingsMenuChildData.h"
#include "SBZSettingsMenuChildManager.generated.h"

UCLASS(Blueprintable)
class USBZSettingsMenuChildManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSettingsMenuChildData> Items;
    
    USBZSettingsMenuChildManager();
};


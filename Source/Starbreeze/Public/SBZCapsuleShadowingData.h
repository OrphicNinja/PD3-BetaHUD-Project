#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZCapsuleShadowingSettings.h"
#include "SBZCapsuleShadowingData.generated.h"

UCLASS(Blueprintable)
class USBZCapsuleShadowingData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCapsuleShadowingSettings> CapsuleShadowingSettingsArray;
    
public:
    USBZCapsuleShadowingData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZCharacterMovementSetting.h"
#include "SBZCharacterMovementSettings.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCharacterMovementSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterMovementSetting DefaultSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCharacterMovementSetting> Settings;
    
public:
    USBZCharacterMovementSettings();
};


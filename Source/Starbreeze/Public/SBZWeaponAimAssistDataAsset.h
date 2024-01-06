#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZWeaponAimAssistData.h"
#include "SBZWeaponAimAssistDataAsset.generated.h"

UCLASS(Blueprintable)
class USBZWeaponAimAssistDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponAimAssistData Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponAimAssistData Mouse;
    
    USBZWeaponAimAssistDataAsset();
};


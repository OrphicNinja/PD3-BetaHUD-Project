#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "SBZHeightTransitionCameraSettings.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZHeightTransitionCameraModifier.generated.h"

UCLASS(Blueprintable)
class USBZHeightTransitionCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHeightTransitionCameraSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend DefaultAlphaBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend AlphaBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingTransitionSpeedModifier;
    
public:
    USBZHeightTransitionCameraModifier();
};


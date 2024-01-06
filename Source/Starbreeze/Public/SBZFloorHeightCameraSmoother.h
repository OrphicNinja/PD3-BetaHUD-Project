#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "SBZPlayerCameraModifier.h"
#include "SBZFloorHeightCameraSmoother.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZFloorHeightCameraSmoother : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval InterpSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CharacterSpeed;
    
public:
    USBZFloorHeightCameraSmoother();
};


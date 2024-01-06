#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZBaseCharacterAnimationData.generated.h"

UCLASS(Blueprintable)
class USBZBaseCharacterAnimationData : public UDataAsset {
    GENERATED_BODY()
public:
    USBZBaseCharacterAnimationData();
};


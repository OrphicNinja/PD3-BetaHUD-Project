#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZEquippablePartCustomData.generated.h"

UCLASS(Blueprintable, Const, MinimalAPI)
class USBZEquippablePartCustomData : public UDataAsset {
    GENERATED_BODY()
public:
    USBZEquippablePartCustomData();
};


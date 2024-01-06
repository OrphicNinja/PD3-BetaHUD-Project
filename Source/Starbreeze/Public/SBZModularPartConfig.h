#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZModularPartConfig.generated.h"

class USBZModularPartDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USBZModularPartConfig : public UDataAsset {
    GENERATED_BODY()
public:
    USBZModularPartConfig();
    UFUNCTION(BlueprintCallable)
    void SetPart(const USBZModularPartDataAsset* PartAsset, int32 Index);
    
};


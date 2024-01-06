#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PD3PawnVariationArray.h"
#include "PD3PawnVariation.generated.h"

UCLASS(Blueprintable)
class UPD3PawnVariation : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PawnVariationArray PawnTypeArray;
    
    UPD3PawnVariation();
};


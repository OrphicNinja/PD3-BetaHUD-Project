#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZLookFocusParameters.h"
#include "SBZLookFocusData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLookFocusData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookFocusParameters LookFocusParameters;
    
    USBZLookFocusData();
};


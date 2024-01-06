#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZNegotiationDifficultySettings.h"
#include "SBZNegotiationSettings.generated.h"

UCLASS(Blueprintable)
class USBZNegotiationSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNegotiationDifficultySettings DifficultySettingsArray[4];
    
    USBZNegotiationSettings();
};


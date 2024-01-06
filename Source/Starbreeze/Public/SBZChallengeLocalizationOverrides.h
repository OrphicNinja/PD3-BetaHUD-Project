#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZObjectiveKeysOverrides.h"
#include "SBZChallengeLocalizationOverrides.generated.h"

UCLASS(Blueprintable)
class USBZChallengeLocalizationOverrides : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZObjectiveKeysOverrides> ObjectiveKeysOverrides;
    
    USBZChallengeLocalizationOverrides();
};


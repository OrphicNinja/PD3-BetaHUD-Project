#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESBZCharacterStance.h"
#include "SBZEmotions.h"
#include "SBZEmotionMapping.generated.h"

UCLASS(Blueprintable)
class USBZEmotionMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZCharacterStance, FSBZEmotions> EmotionsPerStance;
    
    USBZEmotionMapping();
};


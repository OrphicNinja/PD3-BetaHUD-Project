#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ESBZAnimatedInteractionStartType.h"
#include "ESBZAnimationScalePlayRateType.h"
#include "SBZAnimatedInteractionTagPerDuration.h"
#include "SBZAnimatedInteractionData.generated.h"

UCLASS(Blueprintable)
class USBZAnimatedInteractionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAnimatedInteractionStartType StartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAnimationScalePlayRateType PlayRateScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAnimatedInteractionTagPerDuration> AnimatedInteractionTagPerDurations;
    
    USBZAnimatedInteractionData();
};


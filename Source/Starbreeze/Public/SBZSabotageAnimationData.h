#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "SBZSabotageAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZSabotageAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AcceptedHeights;
    
    STARBREEZE_API FSBZSabotageAnimationData();
};


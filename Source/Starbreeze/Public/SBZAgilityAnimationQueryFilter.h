#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ESBZAgilityPointType.h"
#include "ESBZAgilitySegmentAxis.h"
#include "SBZAgilityAnimationQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgilityAnimationQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType StartAgilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType EndAgilityType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilitySegmentAxis DistanceRangeAxis;
    
    STARBREEZE_API FSBZAgilityAnimationQueryFilter();
};


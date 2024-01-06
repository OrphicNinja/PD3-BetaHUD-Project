#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SBZTargetFinderPredicate.h"
#include "SBZTargetFinderPredicate_Dot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZTargetFinderPredicate_Dot : public USBZTargetFinderPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
public:
    USBZTargetFinderPredicate_Dot();
};


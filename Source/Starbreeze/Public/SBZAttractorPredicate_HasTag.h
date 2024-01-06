#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZAttractorPredicate.h"
#include "SBZAttractorPredicate_HasTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate_HasTag : public USBZAttractorPredicate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttractorTags;
    
    USBZAttractorPredicate_HasTag();
};


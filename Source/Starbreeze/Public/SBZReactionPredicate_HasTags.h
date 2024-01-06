#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ESBZPredicateQueryTarget.h"
#include "ESBZTagsQuerySetting.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_HasTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_HasTags : public USBZReactionPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPredicateQueryTarget Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTagsQuerySetting Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    USBZReactionPredicate_HasTags();
};


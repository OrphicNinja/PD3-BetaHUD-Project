#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZStatisticCriteriaData.h"
#include "SBZSecuredBagTypeStatisticCriteria.generated.h"

UCLASS(Blueprintable)
class USBZSecuredBagTypeStatisticCriteria : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BagTypeTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSecuredCount;
    
public:
    USBZSecuredBagTypeStatisticCriteria();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderTypedValue -FallbackName=AIDataProviderTypedValue
#include "Templates/SubclassOf.h"
#include "SBZAIDataProvider_NavQueryFilter.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FSBZAIDataProvider_NavQueryFilter : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultValue;
    
    STARBREEZE_API FSBZAIDataProvider_NavQueryFilter();
};


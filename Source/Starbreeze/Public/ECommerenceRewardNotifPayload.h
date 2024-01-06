#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AccelByteUe4Sdk -ObjectName=AccelByteModelsCreditSummary -FallbackName=AccelByteModelsCreditSummary
//CROSS-MODULE INCLUDE V2: -ModuleName=AccelByteUe4Sdk -ObjectName=AccelByteModelsEntitlementSummary -FallbackName=AccelByteModelsEntitlementSummary
#include "ECommerenceRewardNotifPayload.generated.h"

USTRUCT(BlueprintType)
struct FECommerenceRewardNotifPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardTopic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementSummary> EntitlementSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCreditSummary> CreditSummaries;
    
    STARBREEZE_API FECommerenceRewardNotifPayload();
};


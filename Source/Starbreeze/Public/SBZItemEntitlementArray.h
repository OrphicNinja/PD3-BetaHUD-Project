#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SBZItemEntitlementArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemEntitlementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PlayerItemEntitlementsIds;
    
    STARBREEZE_API FSBZItemEntitlementArray();
};


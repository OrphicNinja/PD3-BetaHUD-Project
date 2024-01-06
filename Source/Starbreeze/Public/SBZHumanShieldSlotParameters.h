#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESBZHumanShieldEnterType.h"
#include "SBZHumanShieldSlotParameters.generated.h"

USTRUCT(BlueprintType)
struct FSBZHumanShieldSlotParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHumanShieldEnterType HumanShieldEnterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    STARBREEZE_API FSBZHumanShieldSlotParameters();
};


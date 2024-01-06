#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "SBZQuat_NetQuantizeNormal.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuat_NetQuantizeNormal : public FQuat {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZQuat_NetQuantizeNormal();
};


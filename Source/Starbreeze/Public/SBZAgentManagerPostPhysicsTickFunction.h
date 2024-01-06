#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SBZAgentManagerPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentManagerPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZAgentManagerPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBZAgentManagerPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSBZAgentManagerPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


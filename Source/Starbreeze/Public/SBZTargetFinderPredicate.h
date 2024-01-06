#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZTargetFinderPredicate.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZTargetFinderPredicate : public UObject {
    GENERATED_BODY()
public:
    USBZTargetFinderPredicate();
};


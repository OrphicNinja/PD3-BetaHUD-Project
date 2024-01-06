#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZGameplayTags.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class STARBREEZE_API USBZGameplayTags : public UObject {
    GENERATED_BODY()
public:
    USBZGameplayTags();
};


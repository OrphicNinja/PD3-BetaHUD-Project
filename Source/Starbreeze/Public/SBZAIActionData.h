#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAIActionData.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZAIActionData : public UObject {
    GENERATED_BODY()
public:
    USBZAIActionData();
};


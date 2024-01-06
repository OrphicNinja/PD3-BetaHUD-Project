#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZWorldEventBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZWorldEventBase : public UObject {
    GENERATED_BODY()
public:
    USBZWorldEventBase();
};


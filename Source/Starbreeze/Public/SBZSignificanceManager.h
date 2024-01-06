#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSignificanceManager.generated.h"

UCLASS(Blueprintable, Within=SBZWorldRuntime)
class USBZSignificanceManager : public UObject {
    GENERATED_BODY()
public:
    USBZSignificanceManager();
};


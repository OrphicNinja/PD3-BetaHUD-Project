#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "SBZNavArea_ExitableNoEnter.generated.h"

UCLASS(Blueprintable)
class USBZNavArea_ExitableNoEnter : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_ExitableNoEnter();
};


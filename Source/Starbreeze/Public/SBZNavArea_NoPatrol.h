#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "SBZNavArea_NoPatrol.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNavArea_NoPatrol : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_NoPatrol();
};


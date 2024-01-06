#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "SBZNavArea_PrivateArea.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNavArea_PrivateArea : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_PrivateArea();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "SBZWheeledVehicleNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USBZWheeledVehicleNavModifierComponent();
};


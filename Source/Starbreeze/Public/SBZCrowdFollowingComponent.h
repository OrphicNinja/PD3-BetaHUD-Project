#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdFollowingComponent -FallbackName=CrowdFollowingComponent
#include "SBZCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USBZCrowdFollowingComponent();
};


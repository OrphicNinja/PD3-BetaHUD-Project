#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "SBZOnlineBeaconHostObject.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZOnlineBeaconHostObject : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ASBZOnlineBeaconHostObject();
};


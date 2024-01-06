#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorChannel -FallbackName=ActorChannel
#include "SBZActorChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZActorChannel : public UActorChannel {
    GENERATED_BODY()
public:
    USBZActorChannel();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISystem -FallbackName=AISystem
#include "SBZAISystem.generated.h"

class USBZAirPathFinder;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAirPathFinder* AirPathFinder;
    
public:
    USBZAISystem();
};


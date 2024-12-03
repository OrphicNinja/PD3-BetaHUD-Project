#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAerialVehicleState.h"
#include "SBZAscendState.generated.h"

class USBZAerialVehicleStateMachine;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAscendState : public UObject, public ISBZAerialVehicleState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAerialVehicleStateMachine* StateMachine;
    
public:
    USBZAscendState();


    // Fix for true pure virtual functions not being implemented
};


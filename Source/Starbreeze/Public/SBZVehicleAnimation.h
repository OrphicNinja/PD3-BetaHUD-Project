#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=VehicleAnimInstance -FallbackName=VehicleAnimInstance
#include "SBZVehicleAnimation.generated.h"

class USBZBuiltInAnimMontage;
class USBZBuiltInAnimMontagesHandler;

UCLASS(Blueprintable, NonTransient)
class USBZVehicleAnimation : public UVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBuiltInAnimMontagesHandler* BuiltInAnimMontagesHandler;
    
public:
    USBZVehicleAnimation();
    UFUNCTION(BlueprintCallable)
    void StopBuiltInAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    float PlayBuiltInAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
};


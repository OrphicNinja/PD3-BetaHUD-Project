#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SBZVehicleInfo.h"
#include "SBZVehicleManager.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZVehicleManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleInfo> VehicleInfos;
    
public:
    USBZVehicleManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredActionPhase(UWorld* World);
    
};


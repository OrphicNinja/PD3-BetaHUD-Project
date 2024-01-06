#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "ESBZVehicleLightCPD.h"
#include "ESBZVehicleLightType.h"
#include "SBZVehicleLights.h"
#include "SBZStaticVehicle.generated.h"

class UAkAudioEvent;
class UAkComponent;
class USBZVariationSetData;

UCLASS(Blueprintable)
class ASBZStaticVehicle : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSBZVehicleLights> LightsCPDGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActiveLightsBitmask;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVariationSetData* VariationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlarmEquippedChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasAlarm: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlarmActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AlarmStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AlarmStopEvent;
    
public:
    ASBZStaticVehicle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryActivateAlarm();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetLightType(ESBZVehicleLightType LightType, bool bIsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetLightCPDBroken(int32 CPDIndex, ESBZVehicleLightCPD LightBit, bool bIsBroken);
    
};

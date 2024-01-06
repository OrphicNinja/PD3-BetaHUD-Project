#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerVolume -FallbackName=TriggerVolume
#include "SBZRoomConnectorInterface.h"
#include "SBZRoomConnectorVolume.generated.h"

class ASBZGate;
class ASBZRoomVolume;

UCLASS(Blueprintable, MinimalAPI)
class ASBZRoomConnectorVolume : public ATriggerVolume, public ISBZRoomConnectorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsAIBreach;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZGate* Gate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConnectorLocation;
    
public:
    ASBZRoomConnectorVolume();
    
    // Fix for true pure virtual functions not being implemented
};


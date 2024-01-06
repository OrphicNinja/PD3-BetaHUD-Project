#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZRoomVolumeInterface.h"
#include "SBZRoomActor.generated.h"

class ASBZRoomVolume;
class UBoxComponent;

UCLASS(Blueprintable)
class ASBZRoomActor : public AActor, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    ASBZRoomActor();
    
    // Fix for true pure virtual functions not being implemented
};

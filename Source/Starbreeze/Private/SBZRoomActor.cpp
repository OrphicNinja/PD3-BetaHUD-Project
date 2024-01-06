#include "SBZRoomActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASBZRoomActor::ASBZRoomActor() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomCollider"));
}


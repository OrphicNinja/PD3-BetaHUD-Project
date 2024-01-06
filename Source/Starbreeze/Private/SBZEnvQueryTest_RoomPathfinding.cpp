#include "SBZEnvQueryTest_RoomPathfinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USBZEnvQueryTest_RoomPathfinding::USBZEnvQueryTest_RoomPathfinding() {
    this->Detail = ESBZEnvTestPathfindingDetail::Rough;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->RoomContext = NULL;
    this->bIsLockedExpensive = false;
}


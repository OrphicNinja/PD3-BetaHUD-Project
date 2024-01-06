#include "SBZEnvQueryGenerator_CoverPoints.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USBZEnvQueryGenerator_CoverPoints::USBZEnvQueryGenerator_CoverPoints() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bUseContextAsGenerator = false;
    this->bSortByDistance = true;
    this->SortCenter = NULL;
    this->TargetContext = NULL;
    this->NrAdditionalRandomDistCovers = 0;
    this->MaxDotToTarget = 0.50f;
    this->bShouldLimitToAdjacentRooms = false;
}


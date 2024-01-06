#include "SBZEnvQueryGenerator_PerceivedActors.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USBZEnvQueryGenerator_PerceivedActors::USBZEnvQueryGenerator_PerceivedActors() {
    this->PerceiverContext = UEnvQueryContext_Querier::StaticClass();
    this->bHostilesOnly = true;
    this->bOnlyVisualGenerators = false;
    this->bCurrentlySensed = true;
}


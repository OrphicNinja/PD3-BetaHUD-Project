#include "SBZEnvQueryTest_Trace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

USBZEnvQueryTest_Trace::USBZEnvQueryTest_Trace() {
    this->TraceChannel = TraceTypeQuery1;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


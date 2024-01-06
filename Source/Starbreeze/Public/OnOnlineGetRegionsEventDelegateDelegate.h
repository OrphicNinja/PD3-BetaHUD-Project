#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AccelByteUe4Sdk -ObjectName=AccelByteModelsQosServerList -FallbackName=AccelByteModelsQosServerList
#include "ESBZOnlineCode.h"
#include "OnOnlineGetRegionsEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineGetRegionsEventDelegate, ESBZOnlineCode, ErrorCode, const FAccelByteModelsQosServerList&, Regions);

